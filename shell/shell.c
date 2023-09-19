#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

void clear_screen(void) {
    system(CLEAR_SCREEN);
}

#define GOOGLE "https://google.com/"

void browse(const char *url) {
    char command[100] = "start ";
    strcat(command, url);
    system(command);
}

int main() {
    // Run shell commands using system
    clear_screen();

    // open your browser to google
    browse(GOOGLE);
}