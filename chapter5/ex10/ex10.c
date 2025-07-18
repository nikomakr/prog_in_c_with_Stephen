/* Chapter5 Ex10 What would happen if you typed a negative number into Program 5.8? Try it and see it. */

/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */

/* 5.8 Reversing the Digits of a Number */

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    while ( number != 0 )
    {
        right_digit = number % 10; /* It gets the last digit from the number given. */
        printf ("%i", right_digit); /* prints out one by one the digits backwards. */
        number = number / 10; /* Moves the decimal to the next digit from the end and as number is integer it saves the number without decimals, so it gets rid off the last digit every time which is just printed out. */
    }

    printf ("\n");
    
    return 0;
}

/* OUTCOME */
/* If you give any negative number which does not contain zero within it, then it prints out in reversed order of the numbers by keeping the minus each time. I think, it's due to unary minus where the predecence is from the right to left. */
/* For instance -123, becomes -3-2-1 */
/* Similarly -103, becomes -30-1 */
/* Lastly, for -13020, it becomes 0-20-3-1 */