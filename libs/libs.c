/*======================================
Loading libs (shared libs)
nix*: dlopen, dlsym, dlclose
win: LoadLibrary(EX), GetProcAddress, FreeLibrary
========================================*/
#include <stdio.h>

int main(void) {

  char *librarypath = argv[1];
  int thenumber = atoi(argv[2]);

  void *libhandle = dlopen(librarypath, RTLD_LAZY);
  if (libhandle == NULL) perror("dlopen");

  int (*opfunc) (int);
  opfunc = dlsym(libhandle, "do_operation");

  if (opfunc == NULL) perror("dlsym");
  printf("%d -> %d\n", thenumber, opfunc(thenumber));
  dlclose(libhandle);

  return 0;
}