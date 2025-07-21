/* Chapter5 Ex11 Write a program that calculates the sum of the digits of an integer. For example, the sum of the digits 2155 is 2+1+5+5 or 13. The program should accept any arbitrary integer typed in by the user. */

#include <stdio.h>

// Global variables — shared across the whole file
int number, reverse, sum;

int main (void)
{
    int copy, digit, printedSomething; /* local variables */
    sum = 0;
    reverse = 0;
    printedSomething = 0;

    // Asks for integer:
    printf("Enter an integer: ");
    scanf("%d", &number); /* Accepts any non-decimal numbers only from -2147483648 till 2147483647. */

    // Gets absolute value of number by getting rid off the minus
    // temp = (number < 0) ? -number : number;
    /* ^ Checks if the number is negative, if so converts it to an absolute number. But still on chapter5 we didn't have any exposure on "?" aka Ternary/Conditional operator. For that reason: */
    while ( number < 0 )
    {
        number = -number;
        break;
    }
    copy = number;
    /* ^ Alternatively, with use of for loop: */
    // for ( ; number < 0; )
    // {
    //   number = -number;
    //   break;
    // }
    // copy = number;

    // Handles case when number == 0 (converts 0 to 0 in reverse)
    reverse = (copy == 0) * 0 + (copy != 0) * reverse; /* Use of boolean arithmetic in C without _bool in <stdbool.h> */
    /* ^ So, If copy == 0: reverse = 1 * 0 + 0 * reverse = 0; and If copy != 0: reverse = 0 * 0 + 1 * reverse = reverse; */

    // Loop which extracts each digit from right to left and updates the reserve variable on each run.
    while (copy != 0)
    {
        reverse = reverse * 10 + (copy % 10);
        copy /= 10;
    }

    // Print leading message
    printf("Sum of the digits of %d is ", number);

    // Step 1 — Loop through digits (if reverse > 0)
    while (reverse > 0)
    {
        digit = reverse % 10;
        sum += digit;
        printf("%d", digit);
        reverse /= 10;
        printedSomething = 1;

        // To print '+' only if more digits remain
        for (int i = 0; i < (reverse > 0); i++)
        {
            printf("+");
        }
    }

    // Step 2 — Special case when reverse is 0 (happens only when input is 0)
    while (printedSomething == 0)
    {
        digit = 0;
        sum += digit;
        printf("0");
        printedSomething = 1;
    }

    // Step 3 — Print sum
    printf(" = %d\n", sum);

    return 0;
}