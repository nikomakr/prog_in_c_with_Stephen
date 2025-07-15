/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.9 Implementing a Revised Program to Reversed the Digits of a Number */

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    do /* By definition the do statement runs at least once the program. As it checks validity on while line. */
    {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    while ( number != 0 );

    printf ("\n");
    
    return 0;
}

/* Comment */
// The difference of do compare to for and while is that it runs the program at least once even when the validation with the while is not TRUE!
// do
//     program statement
// while (loop_expression);