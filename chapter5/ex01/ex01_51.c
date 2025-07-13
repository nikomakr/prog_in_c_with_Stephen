/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.1 Calculating the eighth triangular number */

/* The number of dots it takes to form a triangle containing n rows is the sum of the integers from 1 through n. This sum is known as triangular number */

/* 1         . */
/* 2        .. */
/* 3       ... */
/* 4      .... */
/* 5     ..... */
/* 6    ...... */
/* 7   ....... */
/* 8  ........ */

/* number of rows = 8 */
/* triangular number = 1+2+3+4+5+6+7+8 */

#include <stdio.h>

int main (void)
{
    int triangularNumber;

    triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;

    printf("The eight triangular number is %i\n", triangularNumber);

    return 0;
}

/* OUTCOME */
/* The eight triangular number is 36 */