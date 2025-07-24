/* Chapter6 EX01 Type in and run the 10 programs presented in this chapter. Compare the output produced by each program with the  output presented after each program in the text. Try experimententing with each program by keying in values other than those shown */

/* 6.2  Calculating the Average of a Set of Grades and Counting the Number of Failing Test Grades. */

#include  <stdio.h>

int main (void)
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average; /* That variable will store the outcome of the division of two integer, where in maths we know the outcome it can be integer or floating number. */
    
    printf("How many grades will you be entering? ");
    scanf("%i", &numberOfGrades);
    
    for (i=1; i <= numberOfGrades; ++i)
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);
        
        gradeTotal = gradeTotal + grade;
        
        if (grade < 65)
            ++failureCount;
    }
    
    average = (float) gradeTotal / numberOfGrades; /* By placing (float) before a division of two int variables you convert to floating division, where the outcome will be stored without truncating the number. */
    
    printf("\nGrades average = %.2f\n", average);
    printf("Number of failures = %i\n", failureCount);
    
    return 0;
}

/* OUTCOME */
/* Tested it on https://www.codechef.com/c-online-compiler */
/* Hardcoded the numberOfGrades =7; instead of scanf("%i", &numberOfGrades); */
/* Sample Input: 93 63 87 65 62 88 76 */
/* Your Output: How many grades will you be entering? Enter grade #1: Enter grade #2: Enter grade #3: Enter grade #4: Enter grade #5: Enter grade #6: Enter grade #7: Grades average = 76.29 Number of failures = 2 */
/* Comment ^ It seems someone won't get a bachelor as needs to retake #2 and #5 courses as both below 65% */
