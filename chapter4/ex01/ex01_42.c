/* Chapter4 Ex01 4.2 Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output after each program in the text. */

/* Using the Arithmetic Operations */

#include <stdio.h>

int main (void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;
    
    result = a - b; // subtraction
    printf("a - b = %i\n", result);
 
    result = a * b; // multiplication
    printf("a * b = %i\n", result);
    
    result = a / b; // division
    printf("a / b = %i\n", result);
    
    result = a + b * c; // precedence
    printf("a + b * c = %i\n", result); 
    
    printf("a * b + c * d = %i\n", a * b + c *d);
    
	return 0;
}

/* OUTCOME */
/* a - b = 98 */
/* a * b = 200 */
/* a / b = 50 */
/* a + b * c => a + (b * c) = 150 */
/* a * b + c * d => (a * b) + (c * d) = 300 */

/* Comment - Precedence: */
/* parenthesi () */
/* + unary plus, - unary minus */
/* * multiplication, / division, % modulus */
/* + addition, - minus */