# Linking Libraries
# Nix: .so, .a
# Win: .dll
# Mac: .dylib

CC=gcc
CFLAGS=-Wall -g
BINS=libtest libcode.so libstaticcode.a runtime_libtest static_libtest

all: $(BINS)

libcode.o: libcode.c code.h
  $(CC) $(CFLAGS) -c code.c

libcode.so: libcode.c code.h
  $(CC) $(CFLAGS) -fPIC -shared -o $@ libcode.c -libc

libstaticcode.a: libmycode.o
  ar rcs libstaticcode.a libcode.o

runtime_libtest: libtest.c
  $(CC) $(CFLAGS) -o $@ $^ -L. -libcode

static_libtest: libtest.c
  $(CC) $(CFLAGS) -o $@ $^ -L. -libstaticcode
