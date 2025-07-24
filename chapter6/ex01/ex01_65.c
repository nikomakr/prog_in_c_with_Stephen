/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.5 Determining if a Year is a Leap Year */

/* A leap year is a year that meets the rules of the Gregorian calendar for having an extra day in February to keep the calendar aligned with the Earth's orbit. So, The year must be divisible by: */
/* 4 and not divisible by 100, at the same time. */ 
/* or */
/* The year must be divisible by 400. */

#include <stdio.h>

int main (void)
{
    int year, rem_4, rem_100, rem_400;
    
    printf("Enter the year to be tested: ");
    scanf("%i", &year);
    
    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;
    
    if((rem_4 == 0 && rem_100 != 0)  ||  rem_400 == 0)
        printf("It's a leap year.\n");
    else
        printf("Nope, it's not a leap year.\n");
        
    return 0;
}
