#include <stdio.h>

int main(void) {

  FILE *fp;
  char s[BUFSIZ];
  int linecount = 0;

  fp = fopen("test.c", "r");
  if (fp == NULL) return (perror("Could not open file"), 1);

  while (fgets(s, sizeof s, fp) != NULL)
    printf("%d: %s", ++linecount, s);

  fclose(fp);  
  return 0;
}
