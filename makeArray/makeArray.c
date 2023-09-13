#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <assert.h>
#include <stddef.h>

static int size;
static int *block;

/* macros */
#define MAX_SIZE 100
#define MAX_BITS 64 // 64-bit
#define BITS_PER_BYTE MAX_BITS

#define BITSTR(s, a) do { \
 for (int i = BITS_PER_BYTE - 1; i >= 0; i--) \
   strncat(s, (a & 1 << i) ? "1" : "0", MAX_BITS); \
} while (0)

/* exit handler */
void cleanup(void) {
  fprintf(stdout, "\natexit: Exiting program...\n");
  printf("zeroing out %zu bytes at address 0x%p...\n", sizeof(block) * size, block);
  memset(block, 0x0, sizeof(*block) * size);
  printf("freeing %zu bytes at address 0x%p...\n", sizeof(block) * size, block);
  free(block);
  block = NULL;
  puts("cleanup complete!\n");
}

void makeArray(const int *arr) {
  puts("==================================");
  printf("Allocated %d byte block at address 0x%p\n", sizeof arr * size, (void*)arr);
  printf("for array int arr[%d] containing %d ints ranging from 0 to %d:\n\n", size, size, INT_MAX);

  for (int i = 0; i < size; i++) {
    int n = rand() % INT_MAX;
    char bits[MAX_BITS];
    strncpy(bits, "", MAX_BITS);
    BITSTR(bits, n);
    printf("0x%p:\t%s\t0x%x = %ld\t(%zu bytes)\n", arr + i, bits, n, n, sizeof n);
  }
}

int main(int argc, char *argv[]) {
  atexit(cleanup);

  if (argc == 2) {
    size = atoi(argv[1]);
  } else {
    printf("Enter the size of array (0 - %d): ", MAX_SIZE);
    scanf("%d", &size);
  }

  assert(size <= MAX_SIZE);
  const size_t arr_size = sizeof(int) * size;
  block = malloc(arr_size);
 
  if (block == NULL) {
    fprintf(stderr, "ERROR: Failed to allocate %d bytes\n", arr_size);
    exit(EXIT_FAILURE);
  }

  memset(block, 0, arr_size);
  makeArray(block);
  return 0;
}
