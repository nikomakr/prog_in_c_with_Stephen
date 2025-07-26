/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.7 Categorising a Single Character Entered at the Terminal. */

#include <stdio.h>

int main (void)
{
    char c;
    
    printf("Enter a single character:\n");
    scanf("%c", &c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("It's an alphabetic character.\n");
    else if (c >= '0' && c <= '9')
        printf("It's a digit.\n");
    else
        printf("It's a special character.\n");
    
    return 0;
}

/* OUTCOME */
// Sample Input: &
// Your Output: Enter a single character: It's a special character.

// Sample Input: 8
// Your Output: Enter a single character: It's a digit.

// Sample Input: B
// Your Output: Enter a single character: It's an alphabetic character.