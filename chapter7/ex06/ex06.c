/* Chapter7 Ex07 You don’t need to use an array to generate Fibonacci numbers. You can simply use three variables: two to store the previous two Fibonacci numbers and one to store the current one. Rewrite Program 7.3 so that arrays are not used. Because you’re no longer using an array, you need to display each Fibinacci number as you generate it. */

#include <stdio.h>

int main(void)
{
	int FibCurrent, FibPrevious1, FibPrevious2, i;

	FibPrevious1 = 0;
	FibPrevious2 = 1;

	printf("%i\n%i\n", FibPrevious1, FibPrevious2); /* Printing the first two by definition Fibonacci numbers */

	for (i = 2 ; i < 15; ++i)
    {
		FibCurrent = FibPrevious1 + FibPrevious2;
		printf("%i\n", FibCurrent);
		FibPrevious1 = FibPrevious2;
		FibPrevious2 = FibCurrent;
	}

	return 0;
}
/* OUTCOME */
// Your Output
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377