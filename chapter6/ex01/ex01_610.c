/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.10 Generating a Table of Prime Numbers. */

/* FYI Prime Numbers in math we call a number which can evenly divided by itself and 1 only. */

#include <stdio.h>

int main (void)
{
    int p, d;
    _Bool isPrime;
    
    for (p=2; p<=50; ++p)
    {
        isPrime = 1; /* 1 for true */
        
        for (d=2; d<p; ++d)
            if (p%d == 0) /* When the number p modulus another d number equals 0 then it's not prime. */
                isPrime = 0; /* 0 for false */
            
            if (isPrime != 0) 
                printf("%i  ", p); /* the tab after i is for visual purposes. */
    }
        printf("\n");
        
        return 0;
}

/* OUTCOME */
// Your Output: 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47 