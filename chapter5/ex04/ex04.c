/* Chapter5 Ex04 The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n. For example, 5 factorial is calculated as 5! = 5 x 4 x 3 x 2 x 1 = 120. Write a program to generate and print a table of the first 10 factorials.  */

#include <stdio.h>

int main(void)
{
    int n;
    long long factorial; /* Factorial numbers getting long quickly. */

    // Print header
    printf("%4s%20s\n", "n", "Factorial Number");
    printf("--------------------------------------\n");

    for (n = 0; n < 10; n++)
    {
        factorial = 1;

        // Compute factorial using a nested for loop
        for (int i = 1; i <= n; i++) /* i it's a local variable. */
        {
            factorial *= i;
        }

        printf("%4d%20lld\n", n, factorial);
    }

    return 0;
}

/* OUTCOME */
//   n    Factorial Number
// --------------------------------------
//   0                   1
//   1                   1
//   2                   2
//   3                   6
//   4                  24
//   5                 120
//   6                 720
//   7                5040
//   8               40320
//   9              362880
