/* Chapter6 Ex06 Write a program that takes an integer keyed in from the terminal and extracts and displays each digit of the integer in English. So, if the user types in 932, the program should display

nine three two

Remember to display “zero” if the user types in just a 0.
(Note: This exercise is a hard one!) */

#include <stdio.h>

int main(void)
{
    int number, reversed_number, right_digit, trailing_zeros;

    printf("Enter a number: ");
    scanf("%d", &number); /* Expect a base-10 (decimal) integer aka regular numbers using digits 0–9 due to %d */

    if (number < 0)
    {
        printf("minus "); /* Prints out the minus before to treat it as non negative */
        number = -number;
    }

    if (number == 0)
    {
        printf("zero\n");
        return 0;
    }

    /* Extract and count trailing zeros for hundrens, thousends etc*/
    trailing_zeros = 0;
    while (number != 0 && (number % 10) == 0)
    {
        ++trailing_zeros; /* Counts number of zeros */
        number /= 10; /* Moves on to the next one from the right */
    }

    reversed_number = 0;
    while (number > 0)
    {
        right_digit = number % 10; 
        reversed_number = reversed_number * 10 + right_digit;
        number /= 10;
    }

    /* Print reversed integer in words */
    while (reversed_number > 0) /* Looping till there's no digit left to process aka == 0*/
    {
        right_digit = reversed_number % 10;
        switch (right_digit)
        {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }
        reversed_number /= 10; /* Moving on the next one from the right */
    }

    /* Print trailing zeros */
    while (trailing_zeros--) {
        printf("zero ");
    }

    printf("\n");
    return 0;
}
/* OUTCOME */
// gcc ex06.c -o ex06
// ./ex06
// Enter a number: -456
// minus four five six

// gcc ex06.c -o ex06
// ./ex06
// Enter a number: -8007
// minus eight zero zero seven

// gcc ex06.c -o ex06
// ./ex06
// Enter a number: 0
// zero

// gcc ex06.c -o ex06
// ./ex06
// Enter a number: 12
// one two 

/* Comment */
// There are edge cases where it doesn't react well for some silly entries, but it's outside of the scope of the program.

// Also, the part of trailing zeros it can be by use of an Array and store in buffer.
