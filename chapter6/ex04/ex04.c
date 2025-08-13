/* Chapter6 Ex04 Write a program that acts as a simple “printing” calculator. The program should allow the user to type in expressions of the form 

number   operator

The following operators should be recognized by the program:

+     -     *     /     S     E

The S operator tells the program to set the “accumulator” to the typed-in number. 
The E operator tells the program that execution is to end. The arithmetic operations are performed on the contents of the accumulator with the number that was keyed in acting as the second operand. The following is a “sample run” showing how the program should operate:

    Begin Calculations
    10 S           Set Accumulator to 10
    = 10.000000    Contents of Accumulator
    2 /            Divide by 2
    = 5.000000     Contents of Accumulator
    55 -           Subtract 55
    -50.000000
    100.25 S       Set Accumulator to 100.25
    = 100.250000
    4 *            Multiply by 4
    = 401.000000
    0 E            End of program
    = 401.000000
    End of Calculations.

Make certain that the program detects division by zero and also checks for unknown operators. */

#include <stdio.h>

int main(void)
{
    float number, accumulator;
    char operator;

    printf("Begin Calculations\n\n");
    scanf("%f %c", &number, &operator);

    accumulator = 0;
    while (operator != 'E') {
        switch (operator) {
        case 'S':
            printf("= %f\n\n", accumulator = number);
            break;
        case '+':
            printf("= %f\n\n", accumulator += number);
            break;
        case '-':
            printf("= %f\n\n", accumulator -= number);
            break;
        case '*':
            printf("= %f\n\n", accumulator *= number);
            break;
        case '/':
            if (number == 0)
                printf("Division by zero\n\n");
            else
                printf("= %f\n\n", accumulator /= number);
            break;
        default:
            printf("Unknown operator\n\n");
            break;
        }
        scanf("%f %c", &number, &operator);
    }
    
    printf("= %f\n\n", accumulator);
    printf("End of Calculations\n\n");

    return 0;
}

/* OUTCOME */
// gcc ex04.c -o ex04
// ex04 % ./ex04
// Begin Calculations

// 10 S
// = 10.000000

// 2 /
// = 5.000000

// 55 -
// = -50.000000

// 100.25 S
// = 100.250000

// 4 *
// = 401.000000

// 0 E
// = 401.000000

// End of Calculations

/* Another test: */
// ex04 % gcc ex04.c -o ex04
// ex04 % ./ex04
// Begin Calculations

// 10 S
// = 10.000000

// 5 *
// = 50.000000

// 40 S
// = 40.000000

// 60 -
// = -20.000000

// 5 /
// = -4.000000

// 0 /
// Division by zero

// 7 F
// Uknown operator

// 5 E
// = -4.000000

// End of Calculations

/* Comment */
// All good at the end with the calculator, but if you give it a letter instead of a number or the char for operations switch it's lower it is giving you bonkers, precisely: "unknown operation" and you need to kill the program as it doesn't stop!
// However, the above mentioned is out of the scope of this exercise.

/* Notes */
// A better code, which gives better solution by taking measures against infinite loop due to mistyped value is the following:

// #include <stdio.h>

// int main(void)
// {
//     float number, accumulator = 0;
//     char operator;

//     printf("Begin Calculations\n\n");

//     /* Loop until the user decides to exit with 'E' */
//     while (1) /* Always true, so to run as long as it's necessery. */
//     {
//         printf("Enter a number and an operator (or 'E' to exit): ");

//         if (scanf("%f %c", &number, &operator) != 2) /* If it did not read exactly two valid items, then the input is bad. */ 
//         {
//             /* Handles unexpected input */
//             printf("Invalid input! Please enter a number followed by an operator.\n");

//             while(getchar() != '\n'); /* Clears the input buffer until it sees a newline character. If you don’t clear it, the next `scanf` will see the leftover junk and fails immediately. */

//             continue; /* Retry the input. Goes back to while (1) */
//         }

//         if (operator == 'E') 
//         {
//             break; /* Goes to the closing brace of while (1) */
//         }

//         switch (operator) {
//         case 'S':
//             printf("= %f\n\n", accumulator = number);
//             break;
//         case '+':
//             printf("= %f\n\n", accumulator += number);
//             break;
//         case '-':
//             printf("= %f\n\n", accumulator -= number);
//             break;
//         case '*':
//             printf("= %f\n\n", accumulator *= number);
//             break;
//         case '/':
//             if (number == 0)
//                 printf("Division by zero\n\n");
//             else
//                 printf("= %f\n\n", accumulator /= number);
//             break;
//         default:
//             printf("Unknown operator\n\n");
//             break;
//         }
//     }

//     printf("Final result: %f\n\n", accumulator);
//     printf("End of Calculations\n\n");

//     return 0;
// }
/* OUTCOME */
// gcc ex04.c -o ex04
// ./ex04
// Begin Calculations

// Enter a number and an operator (or 'E' to exit): 10 S
// = 10.000000

// Enter a number and an operator (or 'E' to exit): 2 /
// = 5.000000

// Enter a number and an operator (or 'E' to exit): 55 - 
// = -50.000000

// Enter a number and an operator (or 'E' to exit): 100.25 S
// = 100.250000

// Enter a number and an operator (or 'E' to exit): 4 *
// = 401.000000

// Enter a number and an operator (or 'E' to exit): 0 E
// Final result: 401.000000

// End of Calculations

/* Another test: */
// gcc ex04.c -o ex04
// ./ex04            
// Begin Calculations

// Enter a number and an operator (or 'E' to exit): 1
// 8
// Unknown operator

// Enter a number and an operator (or 'E' to exit): 67 87
// Unknown operator

// Enter a number and an operator (or 'E' to exit): / 8
// = 0.000000

// Enter a number and an operator (or 'E' to exit): 8 /
// Unknown operator

// Enter a number and an operator (or 'E' to exit): Invalid input! Please enter a number followed by an operator.
// Enter a number and an operator (or 'E' to exit): 1 S
// = 1.000000

// Enter a number and an operator (or 'E' to exit): 8 /
// = 0.125000

// Enter a number and an operator (or 'E' to exit): 1 S
// = 1.000000

// Enter a number and an operator (or 'E' to exit): / 8
// Invalid input! Please enter a number followed by an operator.
// Enter a number and an operator (or 'E' to exit): 0 /
// Division by zero

// Enter a number and an operator (or 'E' to exit): 5 /+
// = 0.200000

// Enter a number and an operator (or 'E' to exit): Invalid input! Please enter a number followed by an operator.
// Enter a number and an operator (or 'E' to exit): 5 J
// Unknown operator

// Enter a number and an operator (or 'E' to exit): E
// Invalid input! Please enter a number followed by an operator.
// Enter a number and an operator (or 'E' to exit): 0 E
// Final result: 0.200000

// End of Calculations

/* Comment */
// The code here it's much better that the first version, which is all I have been asked based on exercise. 
// However, I gave it a go to optimise it further! It is not perfect, but handles way more out of the scope edge cases in testing.