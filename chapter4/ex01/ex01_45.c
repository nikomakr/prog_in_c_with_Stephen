/* Chapter4 Ex01 4.5 Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output after each program in the text. */

/* Converting Between Integers and Floats */

#include <stdio.h>

int main (void)
{
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';
    
    i1 = f1; // floating to integer conversion
    printf ("%f assigned to an int produces %i\n", f1, i1);
    
    f1 = i2; // integer to floating conversion
    printf ("%i assigned to a float produces %f\n", i2, f1);
    
    f1 = i2 / 100; // integer divided by integer
    printf ("%i divided by 100 produces %f\n", i2, f1);
    
    f1 = i2 / 100.0; // integer divided by a float
    printf ("%i divided by 100.0 produces %f\n", i2, f2);
    
    f2 = (float) i2 / 100; // type cast operator
    printf ("(float) %i divided by 100 produces %f\n", i2, f2);
    
	return 0;
}

/* OUTCOME */
/* 123.125000 assigned to an int produces 123 */
/* -150 assigned to a float produces -150.000000 */
/* -150 divided by 100 produces -1.000000 */
/* -150 divided by 100.0 produces 0.000000 */
/* (float) -150 divided by 100 produces -1.500000 */

/* Comment */
/* In C, when you divide an integer by a float, the integer is implicitly converted to a float, and the division is performed in floating point, giving an accurate (non-truncated) result */
/* The second approach [f2 = (float) i2 / 100;] is better in C because it ensures the division is performed using floating-point arithmetic, preserving any fractional part, while the first approach can unintentionally lose precision due to integer division. */