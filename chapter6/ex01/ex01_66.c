/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.6 Implementing the Sign Functions */

#include <stdio.h>

int main (void)
{
    int number, sign;
    
    printf("Please type in a number: ");
    scanf("%i", &number);
    
    if (number < 0)
        sign = -1;
    else if (number == 0)
        sign = 0;
    else /* Must be positive */
        sign = 1;
    
    printf("Sign = %i\n", sign);
    
    return 0;
}

/* OUTCOME */
// Sample Input: 1121
// Your Output: Please type in a number: Sign = 1

// Sample Input: -158
// Your Output: Please type in a number: Sign = -1

// Sample Input: 0
// Your Output: Please type in a number: Sign = 0

/* Comment */
/* The structure of: */
/* if */
/* if else */
/* else */
/* it will check one by one, so if the first is true then it stops, unless it check the next one if it's true it stops, at the end it has to be else so by default the last is true. */
/* ^with the above I want to clarify that it's impossible to come true one value in more than one statement. */