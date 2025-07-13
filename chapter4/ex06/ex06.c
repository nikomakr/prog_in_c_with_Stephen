/* Chapter4 Ex06 Write a program to evaluate the polynomial shown here: */
/* 3x^3 + 5x^2 + 6 */
/* for x = 2.55 */

#include <stdio.h>

int main (void)
{
    double x = 2.55; /* Converting it into double */
    double result; /* double offers more accurate results (for some operations in math library). */

    result = 3 * x * x * x - 5 * x * x + 6;

    printf("The value of 3x^3 - 5x^2 + 6 for x = %.2f is %.5f\n", x, result);

    return 0;
}

/* OUTCOME */
/* The value of 3x^3 - 5x^2 + 6 for x = 2.55 is 23.23162 */

/* Comment */
/* As we have many calculations with a decimal number that will cause potentially an outcome where we need more digits after the decimal for high accuracy in results. The double had 15-17 digits after the decimal. */ 