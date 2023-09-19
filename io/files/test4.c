#include <stdio.h>
#define BUFFER_SIZE 4096

int main() {
    puts("Opening file for writing...");
    FILE *fp = fopen("newfile.txt", "w");
    if (fp == NULL) {
        perror("Coudl not write file");
        return 1;
    }    

    puts("Writing file...");
    fprintf(fp, "I love C programming!\n");
    fputs("C programming is awesome.", fp);

    puts("Closing file...");
    fclose(fp);
    puts("File closed.");

    puts("Opening file for reading...");
    fp = fopen("newfile.txt", "r");

    if (fp == NULL) {
        perror("Could not open file");
        return 1; 
    }

    puts("Reading file...");
    char buffer[BUFFER_SIZE];
    
    while (fgets(buffer, BUFFER_SIZE, fp)) {
        printf("%s", buffer);
    }

    puts("\nClosing file...");
    fclose(fp);
    puts("File closed.");
}