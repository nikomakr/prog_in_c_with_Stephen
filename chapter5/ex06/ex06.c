/* Chapter5 Ex06 A minus sign placed in front of a width specification causes the field to be displayed left-justified. Substitute the following printf statement for the corresponding statement in Program 5.2, run the program, and compare the output produced by both programs.
printf ("%-2i           %i\n", n, triangularNumber); */

/* I think, it should be a typo for Program 5.2 I think it suppose to be Program 5.3 here: https://github.com/nikomakr/prog_in_c_with_Stephen/blob/main/chapter5/ex01/ex01_53.c as both referring to triangularNumber, where the program 5.2 refers to squared number n^. */

/*Program 5.3 below: */

// #include <stdio.h>

// int main (void)
// {
//     int n, triangularNumber;
    
//     printf ("TABLE OF TRIANGULAR NUMBERS\n\n"); /* double newline to leave a gap line */
//     printf (" n     Sum from 1 to n\n");
//     printf ("---    -----------------\n");

//     triangularNumber = 0;

//     for ( n = 1; n <= 10; ++n ) /* the +nn is like n = n + 1 */
//     {
//         triangularNumber += n; /* the triangularNumber += n; is triangularNumber = triangularNumber +1; */
//         printf(" %i         %i\n", n, triangularNumber);
//     }

//     return 0;
// }

/* OUTCOME */
// TABLE OF TRIANGULAR NUMBERS

//  n     Sum from 1 to n
// ---  -----------------
//  1         1
//  2         3
//  3         6
//  4         10
//  5         15
//  6         21
//  7         28
//  8         36
//  9         45
//  10        55

/* Chapter 5 Exercise 6
   This program displays triangular numbers from 1 to 10,
   and demonstrates the use of %-2i to left-justify output.
*/

#include <stdio.h>


int main(void)
{
    int n, triangularNumber = 0;

    // Print headings
    printf("n   Triangular Number\n");
    printf("----------------------\n");

    for (n = 1; n <= 10; n++)
    {
        triangularNumber += n; // nth triangular number = 1 + 2 + ... + n

        // Left-justified formatting for 'n' using %-2i
        printf ("%-2i           %i\n", n, triangularNumber); /* That's the difference in that code compared the 5.3 program. */
    }

    return 0;
}

/* OUTCOME */
// n   Triangular Number
// ----------------------
// 1            1
// 2            3
// 3            6
// 4            10
// 5            15
// 6            21
// 7            28
// 8            36
// 9            45
// 10           55

/* Comment */
/* The whole discussion is about printf ("%-2i           %i\n", n, triangularNumber); Precisely the %-2i left-justifies printing of n using 2-character width. Stops numbers "sliding right". Check previous outcome where the 55 pushed to the right due to 10 having two digits. */ 