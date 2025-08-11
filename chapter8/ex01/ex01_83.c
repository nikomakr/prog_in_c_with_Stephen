/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

void printMessage (void)
{
    printf("Programming is fun.\n");
}

int main (void)
{
    int i;

    for ( i = 1; i <= 5; ++i )
        printMessage ();
    
    return 0;
}

/* OUTCOME */
// Programming is fun.
// Programming is fun.
// Programming is fun.
// Programming is fun.
// Programming is fun.