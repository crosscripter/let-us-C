#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

int add(int a, int b) {
  return a + b;
}

void test_add(void) {
  test(add(0, 0) == 0, "0 + 0 is 0");
  test(add(0, 1) == 1, "0 + 1 is 1");
  test(add(-1, 1) == 0, "-1 + 1 is 0");
}

void test_string(void) {
  char *s = malloc(sizeof(char) * 10);
  strncpy(s, "Hello", 10 - 1);
  test(s != NULL, "Allocated string pointer should NOT be NULL");
  test(strlen(s) == strlen("Hello"), "Allocated string should be length of 10");

  free(s);
  s = NULL;
  test(s == NULL, "Allocated string should be free'ed and point to NULL");
}

int main(void) {  

  const int a = 1;
  const int b = 2;
  const int c = add(a, b);
  printf("%d + %d = %d\n", a, b, c);

  test_add();
  test_string();
  return 0;
}
