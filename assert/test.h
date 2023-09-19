#ifndef TEST_H
#define TEST_H

#ifdef TEST
  #include <stdio.h>
  #include <stdlib.h>

  #define test(cond, msg) do { \
      if ((!(cond))) { \
        fprintf(stderr, "\nTest failed (%s:%d @ %s): %s\n%d |  %s\n      ^\n", \
          __FILE__, \
          __LINE__, \
          __PRETTY_FUNCTION__, \
          msg, \
          __LINE__, \
          #cond \
        ); \
        exit(1); \
      } \
    } while(0)

  #else
    #define test(cond, msg)
  #endif // TEST

#endif // TEST_H
