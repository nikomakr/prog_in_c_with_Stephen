/* Chapter3 Ex01 3.4 Write your first program, where it prints out "The sum of 50 and 25 is the calculated outcome" and moves the cursor to a new line. */

#include <stdio.h>

int main (void)
{
    int sum; /* Declaration of the integer variable*/
    
    sum = 50 + 25;
    printf("The sum of 50 and 25 is %i\n", sum); /* %i explanation below*/

	return 0;
}

/* The printf whenever finds the %i inside a character string, it automatically displays the value of the next argument to printf. FYI after the % we can have other options, but this time we have i which stands for integer. */