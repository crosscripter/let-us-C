#include <stdio.h>
#include "test.h"
#include "another.h" // Oof also #includes "test.h"!!!

int main() {
    puts(TEST);
    test();
}