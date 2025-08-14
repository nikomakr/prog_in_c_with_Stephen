/* Chapter6 Ex07 Program 6.10 has several inefficiencies. One inefficiency results from checking even numbers. Because it is obvious that any even number greater than 2 cannot be prime, the program could simply skip all even numbers as possible primes and as possible divisors. The inner for loop is also inefficient because the value of p is always divided by all values of d from 2 through p−1. This inefficiency could be avoided by adding a test for the value of isPrime in the conditions of the for loop. In this manner, the for loop could be set up to continue as long as no divisor was found and the value of d was less than p. Modify Program 5.10 to incorporate these two changes. Then run the program to verify its operation. (Note: In Chapter 6, you discover even more efficient ways of generating prime numbers.) */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int p, d, max = 50;
    bool isPrime;

    for (p = 2; p <= max; ++p)
    {
        if (p == 2)
        {
            isPrime = true;
        }
        else if (p % 2 == 0) /* Check if current number is even (and greater than 2) */
        {
            isPrime = false; /* Any even number greater than 2 is not prime */
        }
        else
        {
            isPrime = true; /* Assuming it's true */
            /* Check for factors from 3 to the square root of p */
            for (d = 3; isPrime && d * d <= p; d += 2) /* Basic Greek math, Euclid. Checking visibility only up to the square root of a number p */
            {
                if (p % d == 0) /* If p is divisible by d (aka other than 1 and itself), it is not prime */
                {
                    isPrime = false; /* Found a divisor, so assumption was wrong. */
                }
            }
        }
        if (isPrime) /* Validation of assumption */

        printf("%i ", p);
    }
    printf("\n");

    return 0;
}

/* OUTCOME */
// Your Output:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 