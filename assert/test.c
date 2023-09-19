#include <stdio.h>
#include <assert.h>
#include "test.h"

#define TEST(cond, msg) do { \
  if (!cond) { \
    fprintf(stderr, "Test failed! %s:%d\n\nat %s\n%d | %s\n   ^\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, __LINE__, #cond); \
    exit(1); \
  } \
} while(0)



