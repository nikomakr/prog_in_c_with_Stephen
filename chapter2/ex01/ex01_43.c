/* Chapter4 Ex01 4.3 Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output after each program in the text. */

/* More examples the Arithmetic Operations */

#include <stdio.h>

int main (void)
{
    int a = 25;
    int b = 2;
    
    float c = 25.0;
    float d = 2.0;
    
    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b); 
    printf("a / d * b = %i\n", a / d * b);
    printf("c / d * d = %f\n", c / d * d);
    printf("-a = %i\n", -a);
    
	return 0;
}

/* OUTCOME */
/* 6 + a / 5 * b = 16 */
/* a / d * b = -1813952160 */
/* c / d * d = 25.000000 */
/* -a = -25 */

/* Comment */
/* The argument (or expression): 6 + a / 5 * b can even include a blend of numbers and variables and in between operations. The printf will show the outcome of all of this as %i. */