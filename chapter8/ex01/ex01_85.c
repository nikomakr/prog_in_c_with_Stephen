/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

void gcd (int u, int v)
{
    int temp;

    printf("The gcd of %i and %i is ", u, v);

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("%i\n", u);
}

int main (void)
{
    gcd (150, 35);
    gcd (1026, 405);
    gcd (83, 240);

    return 0;
}

/* OUTCOME */
// The gcd of 150 and 35 is 5
// The gcd of 1026 and 405 is 27
// The gcd of 83 and 240 is 1

/* Notes */
// The reason we have values of u and v in the main function, it's because of the while loop of the gcd function where over there values are changed within the loop of while.

/* Comment */
// The program is the same as on Chapter5 5.7 program with GCD. 
// However, it uses two functions.