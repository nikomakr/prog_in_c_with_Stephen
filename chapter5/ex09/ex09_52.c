/* Chapter5 Ex09 Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements. Run each program to verify that both versions are identical. */

/* 5.2 Program below: */

/* 5.2 Calculating the 200th triangular number */

/* looping with for statement */

// #include <stdio.h>

// int main (void)
// {
//     int n, triangularNumber;

//     triangularNumber = 0;
//  /* format for statement: */
//  /* for ( init_expression; loop_condition; loop_expression ) */
//     for ( n = 1; n <= 200; n = n + 1)
//         triangularNumber = triangularNumber + n;

//     printf("The 200th triangular number is %i\n", triangularNumber);

//     return 0;
// }

/* OUTCOME */
/* The 200th triangular number is 20100 */

/* looping with while statement */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;
    n = 1;
    
    while (n <= 200)
    {
        triangularNumber = triangularNumber + n;
        n++;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}

/* OUTCOME */
/* The 200th triangular number is 20100 */