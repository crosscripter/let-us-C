#include <stdio.h>
#include <stdlib.h>

// Constant macro
#define MACRO_VALUE 1
#define FIRST_NAME "Mike"

// Function macro
#define MIN(a, b) (a < b ? a : b)
#define MIN_PARENS(a, b) ((a) < (b) ? (a) : (b))

// Using compound expression
#define MIN_EVAL(A, B) ({ \
    typeof(A) _a = (A); \
    typeof(B) _b = (B); \
    _a < _b ? _a : _b; \
})

int getnextnum() {
    int nextnum = rand() % 100;
    printf("next --> %d\n", nextnum);
    return nextnum;
}

int main() {
    // two strings beside one another are concated
    puts("Hello my name is " FIRST_NAME);
    printf("MACRO_VALUE = %d\n", MACRO_VALUE);

    // after preprocessing:
    //  printf("%d\n" (45 < 672 ? 45 : 672))
    printf("%d\n", MIN(45, 672));
    
    // Macros are type dynamic... 
    // No function call overhead
    // macros inline function bodies
    printf("%f\n", MIN(53.4, 17.2));

    // Oof comparing to strings??
    // printf("%f\n", MIN(53.4, "hey"));    

    // If we try this, our macro won't inline with this correctly:
    // that's why we paren each expression in our macro
    int n1, n2, n3;
    // n3 = MIN_PARENS(n1 = getnextnum(), n2 = getnextnum());
    n3 = MIN_EVAL(n1 = getnextnum(), n2 = getnextnum());
    printf("n3 = %d\n", n3);
}
