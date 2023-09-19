#include <stdio.h>

int main() 
{
    char str[20];

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
}
