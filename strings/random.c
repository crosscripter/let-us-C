#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 1000

int main() {
    char text[MAX_CHAR];

    for (int i = 0; i < MAX_CHAR; i++) {
        text[i] = (rand() % 127) + 1;
    }

    // NULL terminate!
    text[MAX_CHAR - 1] = '\0';

    printf("Random string of length %zu at 0x%p (%zu bytes):\n---\n%s\n---", 
        strlen(text), text, sizeof(text), text);
}