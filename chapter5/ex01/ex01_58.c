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

/* Comments */
// gcc -o ex01_58 ex01_58.c
// ./ex01_58
// Give any nonegative integer, upto 10 digits, which doesnt start with zero or it is a zero. Program limitations.

// In reality you dont get back the number you gave reversed, but the program prints out one by one backwards the digits on the same line. So, you get it visually the reversed number.