/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.10A Revising the Program to Generate a Table of Primen Numbers. */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int p, d;
    bool isPrime;
    
    for (p=2; p<=50; ++p)
    {
        isPrime = true;
        
        for (d=2; d<p; ++d)
            if (p%d == 0)
                isPrime = false;
            
            if (isPrime != false) 
                printf("%i  ", p);
    }
        printf("\n");
        
        return 0;
}

/* OUTCOME */
// Your Output: 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47 