/* Chapter3 Ex03 Test the outcome of the following program.*/

#include <stdio.h>

int main (void)
{
    printf("Testing...");
    printf("....1");
    printf("...2");
    printf("..3");
    printf("\n");

	return 0;
}

/* I tested here: https://www.codechef.com/c-online-compiler */
/* Program's outcome is: "Testing.......1...2..3" newline */
/* Comment: the use of printf on new line for each part of the content does not corresponds to equivalent outcome of the program. So, the outcome is combined in one line of the first four printf and only with the last it moves the cursor on newline */