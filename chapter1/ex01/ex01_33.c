/* Chapter3 Ex01 3.3 Write your first program, where it prints out "Testing...", "..1", "...3", "....3" and moves the cursor to a new line after each of it. */

#include <stdio.h>

int main (void)
{
    printf("Testing...\n..1\n...2\n....3\n");

	return 0;
}

/* We can use once the formatted output function and within it to use multiple times \n so to meet criteria of the exercise. */