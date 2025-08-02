/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.3 Generating Fibonacci Numbers */

// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
    int Fibonacci[15], i;
    
    Fibonacci[0] = 0; // by definition
    Fibonacci[1] = 1; // ditto
    
    for (i = 2; i < 15; ++i)
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    
    for (i = 0; i < 15; ++i)
    printf("%i\n", Fibonacci[i]);
    
    return 0;
}

/* OUTCOME */
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377