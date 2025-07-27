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
            
            if (isPrime != 0) /* It can be also written with logical negation operator as if (! isPrime)*/
                printf("%i  ", p); /* the tab after i is for visual purposes. */
    }
        printf("\n");
        
        return 0;
}

/* OUTCOME */
// Your Output: 2  3  5  7  11  13  17  19  23  29  31  37  41  43  47 

/* Comment */
/* If (isPrime) checks if isPrime is other than zero aka isPrime != 0 so it will be TRUE as it is boolean value, */
/* apart from the obvious which is if (isPrime == 1) which is TRUE by default! */
/* In other words */

/* the exclamation mark ! has the same precedence like the unary minus operator. So, for instace the following two are equivalent: */
/* ! (x<y) is equal expression as x>=y */

// _Bool is the official built-in boolean type in C, introduced in the C99 standard (so not really needed the <stdbool.h> library). When you declare a variable as _Bool, it can only hold the values 0 (false) or 1 (true); assigning any nonzero value stores 1, and zero stores 0. You do not need to include any header file to use _Bool directly.

// Last if you want to use TRUE and FALSE then the _Bool had to be bool and to include a header of <stdbool.h>