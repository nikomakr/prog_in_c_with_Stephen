/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.1 Calculating  the Absolute  Value of an Integer */

#include <stdio.h>

int main (void)
{
    int number;
    
    printf ("Type in your number: ");
    scanf ("%i", &number);
    
    if (number < 0)
        number = -number;
    
    printf ("The absolute value is %i\n", number);
    
    return 0;
}

/* OUTCOME */
/* https://www.codechef.com/c-online-compiler */
/* Sample numbers included in the book: */
/* Sample Input: -100 */
/* Your Output: Type in your number: The absolute value is 100 */
/* Sample Input: 2000 */
/* Your Output: Type in your number: The absolute value is 2000 */
/* Sample numbers not included in the book: */
/* Sample Input: 0 */
/* Your Output: Type in your number: The absolute value is 0 */
/* Sample Input: 1.10 */
/* Your Output: Type in your number: The absolute value is 1 */
/* Comment for ^ The i aka integer allows in scanf to receive an input value with decimal number, but it reads and parse it digit by digit. So, it found the 1 and parsed, but once it went to comma aka . then it stopped parsing. For that reason in number variable stored the integer of 1, which later on it prints the system. */
/* Sample Input: 2E-1 */
/* Your Output: Type in your number: The absolute value is 2 */
/* Comment ^ for the same reason as above. It parses only the 2. */
/* Sample Input: 010 */
/* Your Output: Type in your number: The absolute value is 8 */
/* Comment ^ scanf identifies the number as octal due to leading 0, but whenever it sees an octal number which is a normal number like 100 then it takes from granted that's not an octal and acts accordingly by parsing one by one the digits of this number. */
/* Sample Input: 0xFA */
/* Your Output: Type in your number: The absolute value is 250 */
/* Comment ^ it works well once you place hex prefix of 0x. */
