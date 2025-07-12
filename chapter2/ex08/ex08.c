/* Chapter4 Ex08 To round off an integer i to the next largest even multiple of another integer j, the following formula can be used: */
/* Next_multiple = i + j -i % j */

/* For example, to round off 256 days to the next largest number of days evenly divisible by a week, values i = 256 and j = 7 can be subtituted into the preceding formula as follows: */

/* Next_multiple = 256 + 7 - 256 % 7 = 256 + 7 - 4 = 259 */

/* Write a program to find the next largest even multiple for the following values of i and j: */

/* i = 365, 12258, 996 and j = 7, 23, 4 */


#include <stdio.h>

int main (void)
{
    int i1 = 365, j1 = 7;
    int i2 = 12258, j2 = 23;
    int i3 = 996, j3 = 4;
    
    int next1 = i1 + j1 - i1 % j1;
    int next2 = i2 + j2 - i2 % j2;
    int next3 = i3 + j3 - i3 % j3;

    printf("Next multiple of %d after %d is %d\n", j1 ,i1, next1);
    printf("Next multiple of %d after %d is %d\n", j2 ,i2, next2);
    printf("Next multiple of %d after %d is %d\n", j3 ,i3, next3);

    return 0;
}

/* OUTCOME */
/* Next multiple of 7 after 365 is 371 */
/* Next multiple of 23 after 12258 is 12259 */
/* Next multiple of 4 after 996 is 1000 */

/* Comment */
/* The exercise says even multiple, so to be divided by 2 with modulus 0, but after a quick search it seems in programming that expression means next multiple. The formula given finds the next multiple! */
/* Extras */
/* If we want the next largest multiple of j that is also even, so divisible by j and 2, then we need to find the smallest number greater than i that is a multiple of the Least Common Multiple (LCM) of j and 2. That leads us to create a formula of Even_multiple = i + LCM(j,2) - (iLCM(j,2)) */