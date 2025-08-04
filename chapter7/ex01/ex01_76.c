/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.6 Introducing Character Arrays (aka String)*/

#include <stdio.h>

int main (void)
{
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'}; /* (1) */
    int i;
    
    for (i = 0; i < 6; ++i)
        printf("%c", word[i]);
    
    printf("\n");
    
    return 0;
}


/* OUTCOME */
// Your Output
// Hello!

/* Comment */
// (1) Because the size of the array is omitted ([]), the compiler automatically sets the size of word to the number of elements in the initializer list. In this case, 6 characters: 'H', 'e', 'l', 'l', 'o', '!'. So the size is 6.

/* Notes */
// (1) No null terminator included:
// Since you did not include a null character '\0' in the initialiser list, this array is not a proper C string. It is a fixed-size character array with the 6 specified characters, but it is not null-terminated.
// Implications:
// If you try to use word as a string (e.g., pass it to functions like printf("%s", word);), the function expects a null-terminated string and will likely continue reading beyond the array until it finds a '\0', causing undefined behaviour.
// This array is just a sequence of characters, not a string in the C sense!

// If you want a null-terminated string:
// You have two options:
// a) Add the null terminator explicitly in the initialiser list:
// char word[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
// Or
// b) use a string literal initialiser, which automatically appends the '\0':
// char word[] = "Hello!";
// In both cases, word will be a null-terminated string suitable for typical string operations.

// to print it out the above, once it became C style String, you should use: printf("%s", word); as %s is the format specifier, which tells printf to expect a C-style string (a char *) and print it as text

// Another interesting part within the same section of the book is in case of using numbers in the initialisation list, as i:
// float sample_data[] = { [0] = 1.0, [49] = 100.0, [99] = 200.0 };
// the largest index number specified sets the size of the array, so 100 elements.