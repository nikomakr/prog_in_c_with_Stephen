/* Chapter7 Ex05 What output do you expect from the following program? (code is given)*/

#include <stdio.h>

int main(void)
{
    int  numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int  i, j;

    for (j = 0;  j < 10;  ++j)
        for (i = 0;  i < j;  ++i)
            numbers[j]  +=  numbers[i];

    for (j = 0;  j < 10;  ++j)
        printf("%i ", numbers[j]);

    printf("\n");

    return 0;
}
/* OUTCOME */

/* Comment */
// This C code calculates and prints the first 10 elements of a sequence where each element at index j is the sum of all previous elements in the array. Initially, the first element is set to 1, and all subsequent elements are calculated based on the sum of all previous elements.

// Here's a breakdown of the process:

// Initialisation:
// An integer array numbers is defined with the first element set to 1, while the rest are initialised to 0.

// Nested Loops:
// The outer loop iterates over the indices from 0 to 9 (for a total of 10 elements).
// The inner loop sums all previous elements (from index 0 to j-1) and adds that sum to the current element numbers[j].
// Output:
// After processing, the code prints all elements in the numbers array.

// For indices 0 to 9, the printed values will be 1, 1, 2, 4, 8, 16, 32, 64, 128, 256.

// The above represent the cumulative sums of the previous elements in the array.

// Here’s a clearer explanation:

// The first element (numbers[0]) is initialized to 1.
// Each subsequent element (numbers[j]) is calculated as the sum of all preceding elements in the numbers array.
// To clarify:

// numbers[1] becomes 1 (which is numbers[0]).
// numbers[2] becomes 1 + 1 = 2.
// numbers[3] becomes 1 + 1 + 2 = 4, and so on.
// Thus, the values 1, 1, 2, 4, 8, 16, 32, 64, 128, 256 in the array represent a cumulative summation which results in a sequence of totals.