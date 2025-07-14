/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.2 Calculating the 200th triangular number */

/* looping with for statement */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;
 /* format for statement: */
 /* for ( init_expression; loop_condition; loop_expression ) */
    for ( n = 1; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}

/* OUTCOME */
/* The 200th triangular number is 20100 */

/* Comment */
/* 1 Generally the for expression evaluated first. Usually sets a variable tha will be used inside the loop. It's referred to as index variable. The value is 0 or 1. */
/* 2 The looping condition is evaluated. If the condition is not satisfied (the expression is FALSE), the loop is immediately terminated. */
/* 3 Execution continues to the next following in the program. */
/* 4 The looping expression is evaluated. It used to change the value of the index variable, by adding ot subtracking 1 from it. */
/* 5 Returns to step 2. */

/* Do NOT put a semicolon after the end of the closing parenthesis of for as it will terminate as it will run only once. */