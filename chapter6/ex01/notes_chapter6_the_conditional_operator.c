// The Conditional Operator

// Unlike all other operators in C, which are either unary or binary operators the conditional operator is a ternary operator; that is, it takes three operands. 

// The two symbols that are used to denote this operator are:
// 1) the question mark (?) 
// 2) and the colon (:). 
// The first operand is placed before the ?, the second between the ? and the :, 
// 3) and the third after the :

// The general format of the conditional operator is

// condition ? expression1 : expression2

// where condition is an expression, usually a relational expression, that is evaluated first whenever the conditional operator is encountered. If the result of the evaluation of condition is TRUE (that is, nonzero), then expression is evaluated and the result of the evaluation becomes the result of the operation. If condition evaluates FALSE (that is, zero), then expression2 is evaluated and its result becomes the result of the operation.

// The conditional operator is most often used to assign one of two values to a variable depending upon some condition. 

// For example, suppose you have an integer variable x and another integer variable s. 
// If you want to assign -1 to s if x were less than zero, and the value of x² to s otherwise, the following statement could be written:
// s = (x<0) ? -1 : x * x
// So, firstly will be checked the x<0
// FYI the parenthesis is for readability reasons, not needed and it doesnt affect the precedence as conditional operators is very low, lower from the all apart from assignment operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |= and the actual comma , .

// So, about: s = (x<0) ? -1 : x * x
// if expression1 is TRUE so x is lower than 0 then the expression immediately following the ? is evaluated. In this case is the -1 which is assigned to variable s 
// if the expression1 is FALSE, the expression immediately following the : is evaluated and assigned to s

// In other words, we would have call the : like the else/else if in if statement

// Another example is:
// maxValue = (a>b) ? a : b;
// So, the maxValue will come up by examing the validity of a>b, 
// if that's TRUE then it gets the a unless the b.

/* Now check ex01_66.c */
/* Since we now know conditional operator can be written as: */

#include <stdio.h>

int main (void)
{
    int number, sign;
    
    printf("Please type in a number: ");
    scanf("%i", &number);
    
    // if (number < 0)
    //     sign = -1;
    // else if (number == 0)
    //     sign = 0;
    // else /* Must be positive */
    //     sign = 1;

    sign = (number < 0) ? -1 : ((number == 0) ? 0 : 1); /* One line of code replaces lines 48-53*/
    
    printf("Sign = %i\n", sign);
    
    return 0;
}

/* Comment */
// We can shrink more the code by merging lines of 55 and 57 to:
// printf("Sign = %i\n", (number < 0) ? -1 : ((number == 0) ? 0 : 1);

