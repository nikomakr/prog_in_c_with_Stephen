/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.2 Calculating the 200th triangular number */

/* looping with for statement */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;
 /* format for statement: */
 /* for ( init_expression; loop_condition; loop_expression ) */
    for ( n = 1; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}

/* OUTCOME */
/* The 200th triangular number is 20100 */