/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

float absoluteNumber (float x)
{
    if ( x < 0 )
        x = -x;
    return (x);
}

float squareRoot (float x)
{
    const float     epsilon = .00001; /* good practise of const as we don't want to change with the program. */
    float           guess   = 1.0;
    
    while ( absoluteNumber ( guess * guess - x ) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;
    
        return guess;
}

int main (void)
{
    printf ("squareroot (2.0) = %f\n", squareRoot (2.0));
    printf ("squareroot (144.0) = %f\n", squareRoot (144.0));
    printf ("squareroot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}

/* OUTCOME */
// squareroot (2.0) = 1.414216
// squareroot (144.0) = 12.000000
// squareroot (17.5) = 4.183300

/* Comment */
// The x on absoluteValue function is different to the x in squareRoot function. Just saying!

// In C, `.00001` and `0.00001` mean exactly the same thing.

// In C, parentheses around a single variable in a `return` statement make no difference
// return (x);
// return guess;
// Use of parenthesis with return only if we have more than one!