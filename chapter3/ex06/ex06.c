/* Chapter3 Ex06 What output might you expect from the following program? */

#include <stdio.h>

int main (void)
{
    int answer, result;

    answer = 100;
    result = answer - 10;
    printf("The answer is %i\n", result + 5);
    
	return 0;
}

/* OUTCOME */
/* The answer is 95 */