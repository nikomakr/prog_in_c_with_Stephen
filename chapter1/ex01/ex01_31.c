/* Chapter3 Ex01 3.1 Write your first program, where it prints out "Programming is fun." and moves the cursor to a new line. */

#include <stdio.h>

int main (void)
{
    printf("Programming is fun.\n");

	return 0;
}

/* This #include <stdio.h> will be almost everywhere at the beginning of the program. It informs the compiler about the printf output */

/* int stands for integer. main must called the main function of the program you build in C. It is mandatory to have main function. The void within the parenthensis specifies the program main does not take any arguments. */

/* printf is a formatted output function which is part of the standard library of <stdio.h> What is within the double quotes is called argument, which is the parameter passed to the function. */

/* \n the backlash with the n is the newline, so it tells to go to new line of the display. */

/* return 0; it says to finish execution of main and return to the system a value of 0. It indicates successful completion of program without errors. Different integers can be used to indicate different types of error conditions. */

/* https://www.codechef.com/c-online-compiler */