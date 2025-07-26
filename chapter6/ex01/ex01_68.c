/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.8 Evaluating Simple Expressions. */

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;
    
    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2); /* The spaces here: "%f %c %f" say to skip any whitespaces. */
    
    if (operator == '+')
        printf("%.2f\n", value1 + value2);
    else if (operator == '-')
        printf("%.2f\n", value1 - value2);
    else if (operator == '*') /* we use again and again if else as we need only excact match. */
        printf("%.2f\n", value1 * value2);
    else if (operator == '/')
        printf("%.2f\n", value1 / value2);

    return 0;
}

/* OUTCOME */
// Sample Input: 123.5 + 59.3
// Your Output: Type in your expression. 182.80

// Sample Input: 198.7 / 26
// Your Output: Type in your expression. 7.64

// Sample Input: 89.3*2.5
// Your Output: Type in your expression. 223.25