/* Chapter4 Ex01 4.1 Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output after each program in the text. */

/* Using the basic data types */

#include <stdio.h>

int main (void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf ("doubleVar = %e\n", doubleVar);
    printf ("doubleVar = %g\n", doubleVar);
    printf ("charVar = %c\n", charVar);
    
    printf ("boolVar = %i\n", boolVar);
    
	return 0;
}

/* OUTCOME */

/* integerVar = 100 */
/* floatingVar = 331.790009 */
/* doubleVar = 8.440000e+11 */
/* doubleVar = 8.44e+11 */
/* charVar = W */
/* boolVar = 0 */

/* Comment with the printf we use different reference after %, so to show the result by converting into it like i for integer, f for flating number, e for float/double in scientific notation, c for character, etc. */