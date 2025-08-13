/* Chapter6 Ex05 You developed Program 5.9 to reverse the digits of an integer typed infrom the terminal. However, this program does not function well if you type in a negative number. Find out what happens in such a case and then modify the program so that negative numbers are correctly handled. For example, if the number −8645 is typed in, the output of the program should be 5468 */

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    int is_negative = 0; /* binary use */
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    if (number < 0)
    {
        is_negative = 1;
        number = -number;
    }
    
    do /* By definition the do statement runs at least once the program. As it checks validity on while line. */
    {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    while ( number != 0 );

    if (is_negative)
        printf("-");

    printf ("\n");
    
    return 0;
}

/* OUTCOME */
// Sample Input: -8645
// Your Output: 
// Enter your number.
// 5468-