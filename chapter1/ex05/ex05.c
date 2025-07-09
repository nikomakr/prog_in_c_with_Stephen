/* Chapter3 Ex05 Identify the syntactic errors in the following program. Then type in and run the corrected program to ensure you have correctly identified all the mistakes.*/

/* #include <stdio.h>

int main (Void)
(
    INT sum;
    /* COMPUTE RESULT
    sum = 25 + 37 - 19
    /* DISPLAY RESULTS //
    printf ("The answer is %i\n" sum);
	return 0;
}
*/

/* Corrected below */

#include <stdio.h>

int main (void)
{
    int sum;
    /* COMPUTE RESULT */
    sum = 25 + 37 - 19;
    /* DISPLAY RESULTS */
    printf("The answer is %i\n", sum);
    
	return 0;
}