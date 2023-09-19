#include <stdio.h>

int main() {
    char name[50];
    printf("Yo gurl enter yo name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name); 
}