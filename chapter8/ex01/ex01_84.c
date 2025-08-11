/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

void calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for ( i = 1; i <= n; ++i )
        triangularNumber += i;
    
    printf ("Triangular number %i is %i\n", n, triangularNumber);
}

int main (void)
{
    calculateTriangularNumber (10);
    calculateTriangularNumber (20);
    calculateTriangularNumber (50);

    return 0;
}

/* OUTCOME */
// Triangular number 10 is 55
// Triangular number 20 is 210
// Triangular number 50 is 1275

/* Notes */
// We saw Triangular number in Chapter 5 in Ex01 from 5.1 till 5.5