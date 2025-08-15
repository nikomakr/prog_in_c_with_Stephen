/* Chapter 7 Ex04 Write a program that calculates the average of an array of 10 floating-point values. */

#include <stdio.h>

int main (void)
{

	int i;
	long double number, sum = 0, average = 0, array[10];

	printf("Enter 10 numbers to calculate their average: \n");

	for (i = 0; i < 10; ++i)
    {
		scanf("%Lf", &number);
		array[i] = number;
		sum += array[i];
	}
	
	average = sum / 10;

	printf("Average %.2Lf\n", average);

	return 0;
}

/* OUTCOME */
// gcc ex04.c -o ex04
// ./ex04            
// Enter 10 numbers to calculate their average: 
// 2.5
// 4.765
// 0.3
// 6543.5
// 54.89999
// 54.06
// 56.6
// 5.5
// 0.5
// 1.56
// Average 672.42

/* Comment */
// No matter if you put double / float / long double, the result is the same.
// However, I chose the choice with the highest precision due to to long numbers and long decimals.