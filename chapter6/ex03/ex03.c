/* Chapter6 EX03 Write a program that accepts two integer values typed in by the user. Display the result of dividing the first integer by the second, to three-decimal-place accuracy. Remember to have the program check for division by zero. */

#include <stdio.h>

int main(void)
{
    int a, b;
    char c;
    float division;

    printf("Please, type in two integer values: ");
    if (scanf("%d %d%c", &a, &b, &c) != 2)
    {
        // If scanf returns 2, exactly two integers were read and no extra character due to "accepts two integer values"
        printf("Invalid input! Please enter only two integer values.\n");
        return 1;
    }

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

    division = a / b;

    printf("The result of dividing the first integer %d by %d is %.3f.\n", a, b, division);

    return 0;
}

/* OUTCOME */
// Sample Input: 0 1
// Your Output: Please, type in two integer values: The result of dividing the first integer 0 by 1 is 0.000.

// Sample Input: 1 0
// Your Output: Please, type in two integer values: You typed to divide 1 by 0, it can't happen division as the second integer is zero.

// Sample Input: 1 1
// Your Output: Please, type in two integer values: The result of dividing the first integer 1 by 1 is 1.000.

// Sample Input: -1 1
// Your Output: Please, type in two integer values: Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:
// The first number -1 you typed is negative. No worries, we converted it into a positive number.
// The result of dividing the first integer 1 by 1 is 1.000.

// Sample Input: 1 -1
// Your Output: Please, type in two integer values: Negative numbers will be treated as positive. As we calculate only Euclidean division in this program. Find absolute numbers results, below:
// The second number -1 you typed is negative. No worries, we converted it into a positive number.
// The result of dividing the first integer 1 by 1 is 1.000.

// Sample Input: 0 0
// Your Output: Please, type in two integer values: You typed to divide 0 by 0, it can't happen division as the second integer is zero.

// Sample Input: 1 1 1
// Your Output: Please, type in two integer values: Invalid input! Please enter only two integer values.
// Sample Input: 1 G 7
// Your Output: Please, type in two integer values: Invalid input! Please enter only two integer values.

// Sample Input: 1.5 1
// Your Output: Please, type in two integer values: Invalid input! Please enter only two integer values.

// Sample Input: 10 2.50
// Your Output: Please, type in two integer values: Invalid input! Please enter only two integer values.