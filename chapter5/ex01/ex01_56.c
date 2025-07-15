/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.6 Introducing the While statement */

#include <stdio.h>

int main (void)
{
    int count = 1; /* Starting from 1 */
    
    while ( count <= 5 ) /* Count till 5 */
    {
        printf ("%i\n", count); /* Print out the integer */
        ++count; /* Add +1 to current number of count, global variable. */
    }

    return 0;
}

/* OUTCOME */
// 1
// 2
// 3
// 4
// 5

/* Comment */
/* WHILE ( expression is TRUE ) */
/*      program statement */