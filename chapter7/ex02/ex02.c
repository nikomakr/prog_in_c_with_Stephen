/* Chapter7 Ex02 Modify Program 7.1 that the elements of the array values are initially set to 0. Use a for loop to perform the initialisation.*/

#include <stdio.h>

int main (void)
{
    int values[10];
    int index;

    for (index = 0; index < 10; ++index) /* initialisation with for loop */
        values[index] = 0;
    
    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5]/10;
    --values[2];

    for (index = 0; index < 10; ++index)
        printf("values[%i] = %i\n", index, values[index]);
    
        return 0;
}

/* OUTCOME */
// values[0] = 197
// values[1] = 0
// values[2] = -101
// values[3] = 547
// values[4] = 0
// values[5] = 350
// values[6] = 0
// values[7] = 0
// values[8] = 0
// values[9] = 35

/* Comment */
// The outcome is the same as without snippet of code in lines 10 & 11.
// But this version of the program here is following right approach by initialising the Array, before anything else such as allocation of values or printing out them.
// As it is known, in this way we avoid any irregular action during runtime.