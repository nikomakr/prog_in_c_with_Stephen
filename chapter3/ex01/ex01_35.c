/* Chapter3 Ex01 3.5 Write your first program, where it prints out "The sum of integer of value1 and integer if value2 is the calculated outcome" and moves the cursor to a new line. */

#include <stdio.h>

int main (void)
{
    int value1, value2, sum; /* Multiple declarations of integer variables */
    
    value1 = 50; 
    value2 = 25;
    sum = value1 + value2;
    printf("The sum of %i and %i is %i\n", value1, value2, sum); 

	return 0;
}

/* Within the printf we can have multiple %i and the equivalent number of variables to follow after the comma. So, the program to pick up one by one the variables and allocate them within the context once it finds %i. */