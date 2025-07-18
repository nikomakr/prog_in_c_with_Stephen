/* Chapter5 Ex08 Program 5.5 allows the user to type in only five different numbers. Modify that program so that the user can type in the number of triangular numbers to be calculated */

/* 5.5 Program below: */

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

#include <stdio.h>

int main (void)
{
    int n, number, calculatedTriangularNumber;
    int numberOfInputs = 0; /* due to while below, so the program to run at least once */
    int inputCount = 1;

    printf("How many numbers do you want to convert into triangular numbers?");
    scanf("%d", &numberOfInputs); /* %d and not %i explanation in comments are. */

    while (inputCount <= numberOfInputs) /* true by default, so to run at least once. */
    {
        printf("Type the number you want to be calculated its triangular number. ");
        scanf("%d", &number);

        calculatedTriangularNumber = 0;

        for (n = 1; n <= number; ++n)
            calculatedTriangularNumber += n;

        printf("The number %d has a Triangular number of %d\n\n", number, calculatedTriangularNumber);

        inputCount++;
    }

    return 0;
}

/* Comment */
/* Within scanf the %i is not the same as within %i in printf! */
/* The %i in scanf can get integer values, octal values and hexadecimal values. So, by using %d we prevent user to use octal or hexadecimal values. */

/* Just so you play with the compiler and check step by step, some tweaks required as the https://pythontutor.com does not allow inputs! */

// #include <stdio.h>

// int main(void)
// {
//     int n, calculatedTriangularNumber; 
//     int inputs[10] = {0, 1, 5, 10, 11, 13, 4, 3, 8, 100}; /* Hardcoded input array with values. */
//     int numberOfInputs = 10; /* Hardcoded number of values. */
//     int inputCount = 0; /* It became from 1 to 0, because the first value within an array sits on index 0 position. */

//     while (inputCount < numberOfInputs) /* Due to 0 above the <= became < as from 0-9 are 10 inputs. */
//     {
//         int number = inputs[inputCount];

//         calculatedTriangularNumber = 0;
//         for (n = 1; n <= number; ++n)
//             calculatedTriangularNumber += n;

//         printf("The number %d has a Triangular number of %d\n", number, calculatedTriangularNumber);

//         inputCount++;
//     }

//     return 0;
// }

/* OUTCOME */
// The number 0 has a Triangular number of 0
// The number 1 has a Triangular number of 1
// The number 5 has a Triangular number of 15
// The number 10 has a Triangular number of 55
// The number 11 has a Triangular number of 66
// The number 13 has a Triangular number of 91
// The number 4 has a Triangular number of 10
// The number 3 has a Triangular number of 6
// The number 8 has a Triangular number of 36
// The number 100 has a Triangular number of 5050