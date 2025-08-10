/* Program 7.2 permits only 20 responses to be entered. Modify that program so that any number of responses can be entered. So that the user does not have to count the number of responses in the list, set up the program so that the value 999 can be keyed in by the user to indicate that the last response has been entered. (Hint: You can use the break statement here if you want to exit your loop.) */

#include <stdio.h>

int main(void)
{
    int ratingCounters[11], i, response;

    // Initialise counters for ratings 1-10 to zero
    for (i = 0; i <= 10; ++i) /* Correct initialisation of the Array. */
        ratingCounters[i] = 0; /* Index 0 is unused and always zero. */

    printf("Enter your responses (1-10).\n");
    printf("Enter 999 to end this program.\n");

    while (1) { /* Code executes endlessly for while (number), where number != 0 is always true! */
        scanf("%i", &response);

        // Exit loop on sentinel value
        if (response == 999)
            break; /* Protection against the infinite loop due to while (1) */

        if (response < 1 || response > 10)
            printf("Bad response given. Choose any number from 1-10 or 999 to end this program.\n"); /* It doesn't increment. */
        else
            ++ratingCounters[response]; 
    }

    printf("\n\nRating   Number of Responses\n");
    printf("------   -------------------\n");

    for (i = 1; i <= 10; ++i)
        printf("%4i%14i\n", i, ratingCounters[i]);

    return 0;
}
/* OUTCOME */
// gcc ex03_72.c -o ex03_72
// ./ex03_72
// Enter your responses (1-10).
// Enter 999 to end this program.
// 3
// 3
// 5
// 5
// 6
// 9
// 8
// 999


// Rating   Number of Responses
// ------   -------------------
//    1             0
//    2             0
//    3             2
//    4             0
//    5             2
//    6             1
//    7             0
//    8             1
//    9             1
//   10             0

// The program misbehaves when you accidently give it a decimal or letters. 
// It words only for the bare minimum, which is give any number valid or not and with 999 terminates.

/* Notes */
// For 1) while (1) means “loop forever” because the condition inside the parentheses—here simply the integer 1—is always considered “true” by the compiler.
// The syntax for a while loop is generally while (condition) { … } and the loop runs as long as condition is true. In C, any non-zero integer is treated as true, and 1 is a common way to represent “always true.”.
// So, while (1) creates an infinite loop that only ends if you break out of it from inside using a break statement or if the program ends.
// This technique is useful when you want a loop to run an unknown or unlimited number of times, such as when repeatedly accepting user input until a certain exit signal is given