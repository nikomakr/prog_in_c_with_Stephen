/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.1 Working with an Array */

#include <stdio.h>

int main (void)
{
    int values[10];
    int index;

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
// Your Output:
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
// Depending on how you will compile this program, such as locally with gcc or on codechef.com or on pythontutor.com it will affect the outcome for the undefined positions of the Array, which we did not place any values. So, those remain uninitialized. They contain whatever happened to be in that memory location previously, often called "garbage values" as a result reading or using these uninitialised values is undefined behaviour.

// We know by default we need an Array which can hold 10 elements, indexed from 0 to 9. That's the reason for values[10]. The very first as in any Array will be hold in values[0] and the tenth on values[9]. The values[10] it is considered out of bounds!.
// In other words, the size inside the brackets is not the highest index, but the count of total elements.