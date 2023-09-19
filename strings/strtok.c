#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "abc def ghi";
  const char *delim = " ";
  char* token = strtok(str, delim);
 
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, delim);
  }
  
  return 0;
}
