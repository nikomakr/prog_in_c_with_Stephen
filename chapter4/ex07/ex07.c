/* Chapter4 Ex07 Write a program that evaluates the following expression and displays the results (remember to use exponential format to display the result): */
/* (3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8) */

#include <stdio.h>

int main (void)
{
    double result; /* double offers more accurate results (for some operations in math library). */

    result = (3.31 * 100000000 * 2.01 * 10000000) / (7.16 * 1000000 + 2.01 * 100000000);

    printf("The result is %.10e\n", result);

    return 0;
}

/* OUTCOME */
/* The result is 3.1961471945e+07 */

/* Comment */
/* By exponential format means in printf to use %e or %E */ 
/* We use double for high accuracy in operations. */
/* If you write 10^8 you won't get correct results as the ^ in C used for bitwise XOR operator, instead write 1 and 8 zeros. Alternatively, you use on the top the <math.h> library so the result will be written as (3.31 * pow(10, 8) * 2.01 * pow(10, 7) / (7.16 * pow(10, 6) + 2.01 * pow(10, 8) */