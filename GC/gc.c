#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define GC_MAX 10
#define GC_ERR_OUT_OF_MEMORY 0x1

static int gc_index = 0x0;
static void **gc_items = NULL;
static bool gc_initialized = false;
static size_t gc_heap_size = GC_MAX;

void gc_dump() {
  printf("GC %s table at 0x%p, index %d, (%zu bytes)\n", 
    gc_initialized ? "initialized" : "uninitialized", gc_items, gc_index, sizeof(gc_items) * gc_heap_size);

  puts("============================================================");
  for (int i = 0; i < gc_index; i++)
    printf("%c%d:\t0x%p\t%zu bytes\t%s\n", i == gc_index ? '>' : ' ', i, gc_items[i], sizeof(gc_items[i]), !gc_initialized ? "FREE" : "ALLOCATED");
  puts("============================================================");
}

void gc_free(void) {
  printf("GC [free]: Freeing all resources (%zu/%d x %u byte pointers = %zu bytes, indexed at 0x%x-0x%x)\n", 
    gc_index, GC_MAX, sizeof(void*), sizeof(gc_items), 0, gc_index);
  
  for (int i = 0; i < gc_index; i++) {
    void *ptr = gc_items[i];
    printf("GC [free]: Freeing %zu bytes from index %d at 0x%p\n", sizeof(ptr), i, ptr);
    free(ptr);
    ptr = 0;
  }

  printf("GC [free]: Freeing GC memory block at 0x%p (%zu bytes)\n", gc_items, sizeof(void*) * gc_heap_size);
  gc_initialized = false;
  gc_dump();
  gc_index = 0;
  gc_heap_size = 0;
  free(gc_items);
  printf("GC [free]: All resources freed\n");
}

void gc_run(size_t heap_size) {
  if (gc_initialized) gc_free();
  gc_heap_size = heap_size == -1 ? GC_MAX : heap_size;
  gc_items = malloc(gc_heap_size * sizeof(void*));

  if (gc_items == NULL) {
    fprintf(stderr, "GC [run]: GC table failed to initialize, out of memory!\n");
    exit(GC_ERR_OUT_OF_MEMORY);
  }

  gc_index = 0;
  atexit(gc_free);
  gc_initialized = true;
  printf("GC [run]: initialized GC with %zu bytes of memory at 0x%p\n", sizeof(void*) * gc_heap_size, gc_items);
}

void gc_ref(void *ptr, size_t bytes) {
  printf("GC [ref]: increment ref index %d at 0x%p (%zu bytes)\n", gc_index, ptr, bytes);
  gc_items[gc_index] = ptr;
  gc_index++;

  #ifdef DEBUG
    gc_dump();
  #endif
}

void* gc_alloc(size_t bytes) {
  if (gc_index == gc_heap_size) {
    fprintf(stderr, "GC [alloc]: Out of max %d GC memory slots!\n", gc_heap_size);
    return NULL;
  }

  void *ptr = malloc(bytes);
  if (ptr == NULL) {
    fprintf(stderr, "GC [alloc]: Failed to allocate %zu bytes, freeing all resources!\n", bytes);
    gc_free();
    return NULL;
  }

  printf("GC [alloc]: allocated %zu bytes at 0x%p\n", bytes, ptr);
  gc_ref(ptr, bytes);
  printf("GC [alloc]: returning object pointer at 0x%p (%zu bytes)\n", ptr, bytes);
  return ptr;
}


typedef struct _data { 
  int value;
} Data;


int main(void) {

  // C Garage collector!
  gc_run(5);
  {
    Data *data = gc_alloc(sizeof(*data));
  }

  return 0;
}

