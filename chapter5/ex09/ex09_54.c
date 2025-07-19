/* Chapter5 Ex09 Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements. Run each program to verify that both versions are identical. */

/* 5.4 Program below: */

/* 5.4 Asking a user for an input*/

// #include <stdio.h>

// int main (void)
// {
//     int n, number, triangularNumber;
    
//     printf ("What triangular number do you want? ");
//     scanf ("%i", &number);
//     triangularNumber = 0;
    
//     for ( n = 1; n <= number; ++n )
//         triangularNumber += n;
//     printf("Triangular number %i is %i\n", number, triangularNumber);

//     return 0;
// }

/* OUTCOME */
// Triangular number 100 is 5050 

/* Converted into while looping */

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber;
    
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);
    triangularNumber = 0;
    n = 0;
    
    while ( n < number )
    {
        ++n;
        triangularNumber += n;
    }
    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}

/* OUTCOME */
/* What triangular number do you want? Triangular number 100 is 5050 */
/* I run my code on https://www.codechef.com/c-online-compiler and I put on input section 100. */