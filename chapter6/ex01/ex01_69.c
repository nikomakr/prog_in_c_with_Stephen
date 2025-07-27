/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.9 Revising the Program to Evaluate Simple Expressions, Version2 */

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;
    
    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    switch (operator)
    { /* the whole part of switch must go within braces {} */
        case '+':
            printf("%.2f\n", value1 + value2);
            break; /* you need break; after each case unless it won't stop executing even the for rest cases. */
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", value1 / value2);
        default:
            printf("Unknown operator.\n");
            break;
    }
    
    return 0;
}

/* OUTCOME */
// Sample Input: 178.99 - 326.8
// Your Output: Type in your expression.: -147.81