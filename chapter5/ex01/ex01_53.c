/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.3 Generating a Table of Triangular Numbers */

/* looping with for statement */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
    
    printf ("TABLE OF TRIANGULAR NUMBERS\n\n"); /* double newline to leave a gap line */
    printf (" n     Sum from 1 to n\n");
    printf ("---    -----------------\n");

    triangularNumber = 0;

    for ( n = 1; n <= 10; ++n ) /* the +nn is like n = n + 1 */
    {
        triangularNumber += n; /* the triangularNumber += n; is triangularNumber = triangularNumber +1; */
        printf(" %i         %i\n", n, triangularNumber);
    }

    return 0;
}

/* OUTCOME */
// TABLE OF TRIANGULAR NUMBERS

//  n     Sum from 1 to n
// ---  -----------------
//  1         1
//  2         3
//  3         6
//  4         10
//  5         15
//  6         21
//  7         28
//  8         36
//  9         45
//  10         55