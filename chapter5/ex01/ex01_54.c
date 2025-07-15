/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.4 Asking a user for an input*/

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber;
    
    printf ("What triangular number do you want? ");
    scanf ("%i", &number); /* The scanf is a function, which that reads and parses text from standard input. */
/* the & in use of scanf is mandatory. It has to do with pointers, which will be covered later on. */
    triangularNumber = 0;
    
    for ( n = 1; n <= number; ++n )
        triangularNumber += n;
    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}

/* COMMENT */
/* Instead of using an online compiler like codechef.com I chose this time to compile it on VS Code.*/
/* On embedded terminal type the following: */
/* gcc -o ex01_54 ex01_54.c */
/* It runs the first printf and requesting you to give an number. */
/* I gave it 100 as the book example. */
/* It runs the for and the printf by giving you: */
/* Triangular number 100 is 5050 */
