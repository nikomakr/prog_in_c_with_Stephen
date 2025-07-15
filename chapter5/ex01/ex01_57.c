/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.7 Finding the Greatest Common Divisor */

/* Program to find the greatest common divisor of two nonnegative integer values */

/* Calculate: temp = u % v; u = v; v = temp; */

#include <stdio.h>

int main (void)
{
    int u, v, temp;
    
    printf ("Please type in two nonnegative integers.\n");
    scanf ("%i%i", &u, &v); /* The way to request two integers to be given. */
    
    while ( v != 0 ) /* Mandatory program check as we cannot have division by 0. */
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf ("Their greatest common divisor is %i\n", u);
    
    return 0;
}