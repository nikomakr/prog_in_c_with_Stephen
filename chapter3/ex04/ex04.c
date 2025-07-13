/* Chapter3 Ex04 Write a program  that subtracts the value 15 from 87 and displays the result, together with an appropriate message, at the terminal.*/

#include <stdio.h>

int main (void)
{
    int value1, value2, result;
    
    value1 = 15;
    value2 = 87;
    result = value2 - value1;
    
    printf("The result of subtracting %i from %i is %i\n", value1, value2, result);

	return 0;
}