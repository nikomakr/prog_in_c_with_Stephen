/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

void printMessage (void) /* Function executed after the main. 1) */
{
    printf("Programming is fun.\n");
}

int main (void) /* As always execution starts from main. */
{
    printMessage (); /* That's the point, where execution is transfered to the second function. */

    return 0;
}
/* OUTCOME */
// Programming is fun.

/* Notes */
// The program consists of two functions, printMessage & main.
// Program execution ALWAYS begins with main function.

// The braces showcasing to the compiler a function, two in this program.

// When a function call is executed, program execution is transferred directly to the indicated function.
// So, inside the printMessage function, where the printf statement is executed.

// After the message is been displayed, the printMessage is finished. (signaling the closing brace)

// The program returns to the main, where the program execution continues at the point where the function call was executed.

// 1) The first line of the printMessage function tells the compiler that the function returns no value, (first void).
// The second void in the parenthesis (void) says no arguments.

/* Comment */
// It is acceptable to insert:
// return;
// statement at the end of the printMessage.

// However, reaching the end of a function without executing return has the effect of exiting the function anyway without returning a value.

// That means that if for any reason we wanted to exist the printMessage under specific scenario, then we must use return; so to exit the execution of the function. In the current example naturally the execution finishing so return; does nothing additionally. 