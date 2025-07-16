/* Chapter5 Ex02 Write a program to generate and display a table of n and n² for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings. */

#include <stdio.h>

int main (void)
{
    int n;
    
    printf("%4s%6s\n", "n", "n^2"); /* Reserves 4/6 character spaces for the string. If the string is shorter than 4 characters (like "n"), it adds padding spaces on the left to fill the width. */
    printf("------------\n");
    
    for (int n = 1; n <=10; n++)
    {
        printf("%4d%6d\n", n, n * n);
    }
    
    return 0;
}

/* OUTCOME */
//   n   n^2
// ------------
//   1     1
//   2     4
//   3     9
//   4    16
//   5    25
//   6    36
//   7    49
//   8    64
//   9    81
//   10   100