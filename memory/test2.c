#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 4;
    int *ptr;
    ptr = malloc(n * sizeof(*ptr));

    if (ptr == NULL) 
    {
        puts("Memory allocation failed");
        return 1;     
    }

    printf("Enter input values: ");

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", ptr + i);
    }

    printf("Input values:\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
}