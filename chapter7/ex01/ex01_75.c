/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.5 Initialising Arrays*/

#include <stdio.h>

int main (void)
{
    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;
    
    for (i = 5; i  < 10; ++i)
        array_values[i] = i * i;
    
    for (i = 0; i < 10; ++i)
        printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}

/* OUTCOME */
// Your Output:
// array_values[0] = 0
// array_values[1] = 1
// array_values[2] = 4
// array_values[3] = 9
// array_values[4] = 16
// array_values[5] = 25
// array_values[6] = 36
// array_values[7] = 49
// array_values[8] = 64
// array_values[9] = 81

/* Comment */

/* Notes */