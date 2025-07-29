/* Chapter6 EX02 Write a program that asks the user to type in two integer values at the terminal. Test these two numbers to determine if the first is evenly divisible by the second, and then display an appropriate message at the terminal. */

#include <stdio.h>

int main(void)
{
    int a, b;
    int remainder;

    printf("Please, type in two integer values: ");
    scanf("%i %i", &a, &b);

    // Division by zero check
    if (b == 0)
    {
        printf("You typed to divide %d by %d, it can't happen division as the second integer is zero.\n", a, b);
        return 0;
    }

    if (a < 0 || b < 0)
    {
        printf("Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:\n");
    }

    // Convert to absolute values
    if (a < 0)
    {
        printf("The first number %d you typed is negative. No worries, we converted it into a positive number.\n", a);
        a = -a;
    }
    if (b < 0)
    {
        printf("The second number %d you typed is negative. No worries, we converted it into a positive number.\n", b);
        b = -b;
    }

    remainder = a % b;

    if (a == 0)
    {
        printf("You typed to divide 0 by %d, that's zero! As 0 divided by any number is 0 silly. That means it is an even number.\n", b);
    }
    else if (remainder == 0)
    {
        printf("The %d is evenly divided by %d.\n", a, b);
    }
    else
    {
        printf("Sorry the %d is not evenly divided by %d as the remainder is %d.\n", a, b, remainder);
    }

    return 0;
}

/* OUTCOME */
// Sample Input: -9 0
// Your Output: Please, type in two integer values: You typed to divide -9 by 0, it can't happen division as the second integer is zero.

// Sample Input: 0 0
// Your Output: Please, type in two integer values: You typed to divide 0 by 0, it can't happen division as the second integer is zero.

// Sample Input: 6 3
// Your Output: Please, type in two integer values: The 6 is evenly divided by 3.

// Sample Input: 6 4
// Your Output: Please, type in two integer values: Sorry the 6 is not evenly divided by 4 as the remainder is 2.

// Sample Input: -1 1
// Your Output: Please, type in two integer values: Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:
// The first number -1 you typed is negative. No worries, we converted it into a positive number.
// The 1 is evenly divided by 1.

// Sample Input: 1 -1
// Your Output: Please, type in two integer values: Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:
// The second number -1 you typed is negative. No worries, we converted it into a positive number.
// The 1 is evenly divided by 1.

// Sample Input: -1 -1
// Your Output: Please, type in two integer values: Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:
// The first number -1 you typed is negative. No worries, we converted it into a positive number.
// The second number -1 you typed is negative. No worries, we converted it into a positive number.
// The 1 is evenly divided by 1.