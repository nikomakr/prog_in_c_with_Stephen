/* Chapter5 Ex01 Type in and run the nine programs presented in this chapter. Compare the output produced each program with the output presented after each program in the text. */
/* 5.5 Using Nested for Loops */

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, numberOfInputs;
    
    for ( numberOfInputs = 1; numberOfInputs <= 5; ++numberOfInputs) /* Loop in the program to simply repeat the entire series of calculations 5 times. */
    {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);

        triangularNumber = 0;
    
        for ( n = 1; n <= number; ++n )
            triangularNumber += n;
            
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}

/* OUTCOME */
// gcc -o ex01_55 ex01_55.c                                 
//  ./ex01_55                                                 
// What triangular number do you want? 12
// Triangular number 12 is 78

// What triangular number do you want? 25
// Triangular number 25 is 325

// What triangular number do you want? 50
// Triangular number 50 is 1275

// What triangular number do you want? 75
// Triangular number 75 is 2850

// What triangular number do you want? 83
// Triangular number 83 is 3486


/* Comment */
/* For 5 times 
{
    Get the number from the user.
    Calculate the requested triangular number.
    Display the result.
} */

/* In C we can have upto 127 level of nesting! */

/* With looping comes the introduction of local variable, where can be declared with the for and cannot be used outside of it. For instance for global variable of numberOfInputs can be eliminated as global variable and instead have as a local variable within the first for function as for ( numberOfInputs = 1; numberOfInputs <= 5; ++numberOfInputs) */