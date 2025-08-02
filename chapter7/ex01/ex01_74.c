/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.4 Revising the Program to Generate Prime Numbers, Version2*/

/* Optimisation of Chapter 6 Ex6.10A with use of an Array and use of square root. */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;
    
    for (p = 5; p <= 50; p = p+2) /* (1) */
    {
        isPrime = true; /* Hypothesizing the number is prime. */
        
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) 
            if (p % primes[i] == 0)
                isPrime = false; /* Assigns false! */

        if ( isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    
    for (i = 0; i < primeIndex; ++i)
        printf("%i   ", primes[i]);
    
    printf("\n");
    
    return 0;
}

/* OUTCOME */
// 2   3   5   7   11   13   17   19   23   29   31   37   41   43   47

/* Comment */
// The first two prime numbers are 2 and 3.
// We don't need to check even numbers as those are multiples of 2!
// (1) So, the first number of the for loop is the 5 and then the program icreases by 2 so to be checked only the odd numbers. 

// The reason primeIndex starts with 2 is due to the fact that we have two prime numbers in the Array since the beginning. Those are 2, 3 values on prime[0] and prime[1] respectively. So, the Array have the next available, which is prime[2] due to the primeIndex = 2 following snippet of primes[primeIndex] = p;

// Due to the use of the library of <stdbool.h> we have the binary bool of TRUE/FALSE for isPrime.



/* Notes */
// (A) Square Root Method:
// Instead of dividing a number by every whole number up to itself, you only need to check divisibility up to its square root.
// So, If a number  can be factored into two numbers a and b (so n = a * b), then one of those numbers must be less than or equal to square number of n. If both were greater than square number of n, their product would be bigger than n; if both were less, their product would be smaller than n.
// Steps:
// 	•	For number n > 1, check every integer K from 2 up to square number of n.
// 	•	If  is divisible by any K, it’s composite; if not, it’s prime.

// (B) The Sieve of Eratosthenes (for many primes):
// It’s best used for finding many primes at once but not ideal for checking a single number.
// Is a classic and efficient algorithm for finding all prime numbers up to a given limit. It’s based on the principle that all multiples of a prime number are composite (not prime).

// (C) Primality Tests (for Large Numbers)