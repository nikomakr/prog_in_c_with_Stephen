/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.3  Determining if a Number is Even or Odd. */

#include <stdio.h>

int main (void)
{
    int number_to_test, remainder;
    
    printf("Enter your number to be tested. : ");
    scanf("%i", &number_to_test);
    
    remainder = number_to_test % 2;
    
    if(remainder == 0)
        printf("The number is even.\n");
        
    if(remainder != 0)
        printf("The number is odd.\n");
        
    return 0;
}
