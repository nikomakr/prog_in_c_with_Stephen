/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.8 Generating Fibonacci Numbers Using Variable-Length Arrays */

#include <stdio.h>

int main (void)
{
    int i, numFibs;

    printf("How many Fibonacci numbers do you want (between 1 and 75)?");
    scanf("%i", &numFibs);

    if (numFibs < 1 || numFibs >75)
    {
        printf("Bad number, sorry!\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0; // by definition
    Fibonacci[1] = 1; // ditto

    for ( i = 2; i < numFibs; ++i)
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    
    for ( i = 0; i < numFibs; ++i)
        printf("%llu    ", Fibonacci[i]);
    
    printf("\n");

    return 0;
}

/* OUTCOME */
// Input value: 20
// 0    1    1    2    3    5    8    13    21    34    55    89    144    233    377    610    987    1597    2584    4181

/* Comment */
// In line 20 where we have: unsigned long long int Fibonacci[numFibs];
// That is called Variable-Length Array, VLA.

/* Notes */
// A variable length array (VLA) in C has a size determined at runtime with each program execution, so its length and the values it holds can vary every time the program runs. In contrast, a constant array typically refers to an array declared with the `const` qualifier, meaning its elements cannot be changed after initialization, though its size is fixed and defined at compile time.

// 	•	VLAs: Size is set by a variable during execution; the array can have DIFFERENT LENGTH and VALUES for each run. ONLY a VLA lets you choose the length at runtime!
// 	•	CONSTANT ARRAY: Created using a `const` declaration, their LENGTH and initial VALUES ARE FIXED when the program is compiled, and their contents cannot be modified while the program runs. 
//     However, the term “constant array” does not mean its contents always remain the same from run to run, they are set by initialisation and cannot be changed programmatically during execution. 
//     The `const` qualifier ensures the values do not change during the run by the compiler, but the values can differ in different program runs if initialised differently, only manually, by a programmer applying changes to the source code.
//     •	It’s important to note that a regular NON-CONST ARRAY may have its elements changed after creation, but its size remains fixed. That means that will have FIXED LENGTH, but VALUES CAN CHANGE.