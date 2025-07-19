/* Chapter5 Ex09 Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements. Run each program to verify that both versions are identical. */

/* 5.5 Program below: */

/* 5.5 Using Nested for Loops */

// #include <stdio.h>

// int main (void)
// {
//     int n, number, triangularNumber, numberOfInputs;
    
//     for ( numberOfInputs = 1; numberOfInputs <= 5; ++numberOfInputs) /* Loop in the program to simply repeat the entire series of calculations 5 times. */
//     {
//         printf ("What triangular number do you want? ");
//         scanf ("%i", &number);

//         triangularNumber = 0;
    
//         for ( n = 1; n <= number; ++n )
//             triangularNumber += n;
            
//         printf("Triangular number %i is %i\n\n", number, triangularNumber);
//     }

//     return 0;
// }

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

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, numberOfInputs;
    numberOfInputs = 0;
    
    while ( numberOfInputs < 5 )
    {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);

        ++numberOfInputs;
        triangularNumber = 0;
        n = 0;
    
        while ( n < number )
        {
            ++n;
            triangularNumber += n;
        }
        
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}

/* OUTCOME */
/* Ran the updated script on https://www.codechef.com/c-online-compiler */
/* On the input section I put the same numbers of 12 25 50 75 83 */
/* And I got the output: */
// What triangular number do you want? Triangular number 12 is 78
// What triangular number do you want? Triangular number 25 is 325
// What triangular number do you want? Triangular number 50 is 1275
// What triangular number do you want? Triangular number 75 is 2850
// What triangular number do you want? Triangular number 83 is 3486