/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.2 Demostrating an Array of Counters */

#include <stdio.h>

int main (void)
{
    int ratingCounters[11], i, response;

    /* The loop that initialises the array is essential, when you declare an Array; its elements do not automatically have a known value, they contain garbage values, which are unpredictable data left in memory from previous operations. */
    for (i = 1; i <= 10; ++i)
        ratingCounters[i] = 0; 

    printf("Enter your responses\n"); 

    for (i = 1; i <= 20; ++i) /* Requests 20 valid responses, one after the other. */
    {
        scanf("%i", &response); /* (2) */

        if (response < 1 || response > 10) /* Checks validation of responses */
            printf("Bad response: %i\n", response); /* Does not increment the loop! Same i will be used.*/
        else
            ++ratingCounters[response]; /* Increments only if the response is valid! */
    }

    printf("\n\nRating Number of Responses\n");
    printf("------ -------------------\n");

    for (i = 1; i <= 10; ++i)
        printf("%4i%14i\n", i, ratingCounters[i]); /* 4 spaces left-aligned, 14 spaces right-aligned. */
    
    return 0;
}

/* OUTCOME */


/* Comment */
// ratingCounters[11] it's an Array of 10 elements for educational purposes, see (1) below.

// If you skip initialisation and directly increment the elements (++ratingCounters[response];), you are incrementing an unknown starting value, which leads to incorrect and unreliable counting.

// To keep the code consise and avoid use of unnessecary variable(s) for loop counter, we use in both loops the i variable.

// printf("Bad response: %i\n", response); I would have go for printf("Bad response, choose only absolute numbers from 1 to 10:\n"); as still it informs the user and in edge cases does not attempt to show other than the actual input!
// The invalid response is not stored or counted.
// For instance a decimal won't be shown as it is trunckated anything after the comma and if non-digit value inserted, it won't show the printf content and the value inserted due to %i. However, that doesn't fix everything!
// Despite the fact the program seems it won't stop till it will get 20 valid responses, that is not true in edge cases! If the given response is instead of a number a letter or special character, then unexpected behaviour or an infinite loop waiting for input will be occurred. So, that case the program won't collect 20 responses! 

// (1) The first loop of for does not initilises all spaces of the Array as it leaves the position 0 without allocation of zero value. So, that's not recommended outside of educational purposes due to potential bug in the code in future. We should better use:
//  int ratingCounters[11] = {0}; */
// ^ With the above we initialise all elements to 0

// (2) The infinite loop is caused because scanf("%i", &response) fails to read a non-integer input.

// The infinite loop is caused because scanf("%i", &response) fails to read a non-integer input.
// When it fails, it does not consume invalid input from the input buffer, so the same invalid input remains there.
// The program then tries to read again and again, never progressing.

// A better approach to avoid the infinite loop:
// Check the return value of scanf.
// If scanf returns 0 or EOF, it means input failed — handle it.
// Clear the invalid input from the buffer. (!)
// Prompt the user to re-enter a valid integer before proceeding.

// In the program, when you enter responses (numbers) and press Enter:
// The line with all characters you typed is stored in the input buffer.
// scanf("%i", &response) reads from this buffer a number, stopping when it hits non-numeric characters or the end of the buffer.
// Any leftover characters (like extra spaces or letters you did not consume) remain in the buffer.
// If the input is invalid (non-numeric), scanf fails without consuming those characters, so they stay in the buffer and cause repeated read failures unless explicitly cleared.

// For all the above, a better approach is the following:
// int validResponses = 0;
// while (validResponses < 20)
// {
//     int result = scanf("%i", &response);

//     if (result != 1) /* it checks: Did scanf fail to read and store exactly one integer? */
//     {
//         printf("Bad response: invalid input\n");
//         while (getchar() != '\n') ;  /* Clear input buffer until newline (3) */
//         continue;                /* Retry reading input */
//     }

//     if (response < 1 || response > 10)
//     {
//         printf("Bad response: %i\n", response);
//         continue;                // retry reading input
//     }

//     ++ratingCounters[response];
//     ++validResponses;
// }

// The above is much bettter, as it aims the program to achieve what it should in first place which is no other than to get 20 responses. So, 

/* notes */
// What is a buffer?
// A buffer is a temporary storage area in memory used to hold data while it is being transferred from one place to another. In the context of input/output (I/O) operations in programming (like reading from the keyboard or writing to the screen), buffers help improve efficiency and handle data smoothly.

// How does a buffer work?
// When you interact with a program through input/output, data doesn't flow one character at a time directly to or from your program. Instead, it usually passes through a buffer that temporarily holds chunks of data:

// Example: Input Buffer (stdin)
// When you type characters on your keyboard, those keystrokes are collected (buffered) in a small piece of memory.
// The input isn't immediately sent to your program character-by-character.
// Typically, input is buffered line by line. That means the operating system collects the characters until you press Enter (newline character).
// Once you press Enter, the whole line is sent from the keyboard buffer to your program's input buffer (stdin).

// Concept	Description
// Buffer	Temporary memory area for data
// Input buffer	Holds user keystrokes until Enter is pressed
// Output buffer	Holds output before it's sent to the screen or file
// Why buffer?	Improves efficiency and control of I/O
// Buffer clearing	Needed when invalid input causes leftover data that breaks further reading
// Your program reads data from this input buffer when you call input functions like scanf, getchar, fgets, etc.

// (3) is a common C idiom used to clear the input buffer up to and including the next newline character ('\n').
// What does it do, step by step?
// getchar() reads and removes one character at a time from the program's standard input buffer (which holds keyboard input after you press Enter).
// The loop consumes and discards characters with getchar()—doing nothing else—until it encounters a newline ('\n'), which is generated when you hit Enter.
// When the newline is read, the condition becomes false, the loop ends, and the input buffer is now empty of all characters from the previous input line.
// Why is it used?
// If a user enters invalid input, that data (letters, extra symbols) stays in the input buffer.
// If not removed, future input operations may read these leftover characters, causing repeated errors or undesired behavior.
// This loop ensures the buffer is flushed, so the program can read fresh input on the next attempt.
// Summary
// This pattern clears out any leftover input (up to the end of the line) after a bad or partial input, so the user can enter new data cleanly.
// The semicolon (;) means the loop body is empty—it just repeats the condition and discards each character read.
// This is standard, portable C for handling stray or invalid input and works on all platforms.