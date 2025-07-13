/* Chapter4 Ex04 Write a program that converts 27 from degress Fahrenheit (F) to degrees Celsius (C) using the following formula: C = (F - 32) / 1.8 */

#include <stdio.h>

int main (void)
{
    double F = 27, C;
    
    C = ( F - 32 ) / 1.8; 
    
    printf("The conversion of %.0f degrees Fahrenheit in degrees Celsius is %.2f\n", F, C);
    
    return 0;
}

/* OUTCOME */
/* The conversion of 27 degrees Fahrenheit in degrees Celsius is -2.78 */

/* Comment */
/* Decided to use double for F and C variables as it is more relevant to temparature usual format, but also below in the formula the division is by short floating number. */
/* I had to use the formula as it is been given, so to meet criterio of use of it. */
/* In the printf I used %.0f for F so to be displayed as 27, which is as it is been given. But on the C I used %.2f so to round the outcome to be displayed as number with two decimals. */