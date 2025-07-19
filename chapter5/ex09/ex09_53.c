/* Chapter5 Ex09 Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements. Run each program to verify that both versions are identical. */

/* 5.3 Program below: */

/* 5.3 Generating a Table of Triangular Numbers */

/* looping with for statement */

// #include <stdio.h>

// int main (void)
// {
//     int n, triangularNumber;
    
//     printf ("TABLE OF TRIANGULAR NUMBERS\n\n"); /* double newline to leave a gap line */
//     printf (" n     Sum from 1 to n\n");
//     printf ("---    -----------------\n");

//     triangularNumber = 0;

//     for ( n = 1; n <= 10; ++n ) /* the +nn is like n = n + 1 */
//     {
//         triangularNumber += n; /* the triangularNumber += n; is triangularNumber = triangularNumber +1; */
//         printf(" %i         %i\n", n, triangularNumber);
//     }

//     return 0;
// }

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

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
    printf ("TABLE OF TRIANGULAR NUMBERS\n\n"); /* double newline to leave a gap line */
    printf (" n     Sum from 1 to n\n");
    printf ("---    -----------------\n");

    triangularNumber = 0;
    n = 0;

    while ( n < 10 ) 
    {
        ++n;
        triangularNumber += n;
        printf(" %i         %i\n", n, triangularNumber);
    }

    return 0;
}

/* OUTCOME */
// TABLE OF TRIANGULAR NUMBERS

//  n     Sum from 1 to n
// ---    -----------------
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