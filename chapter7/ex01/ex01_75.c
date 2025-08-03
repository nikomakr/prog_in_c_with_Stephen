/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.5 Initialising Arrays */

#include <stdio.h>

int main (void)
{
    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;
    
    for (i = 5; i  < 10; ++i)
        array_values[i] = i * i;
    
    for (i = 0; i < 10; ++i)
        printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}

/* OUTCOME */
// Your Output:
// array_values[0] = 0
// array_values[1] = 1
// array_values[2] = 4
// array_values[3] = 9
// array_values[4] = 16
// array_values[5] = 25
// array_values[6] = 36
// array_values[7] = 49
// array_values[8] = 64
// array_values[9] = 81

/* Comment */
// Question arises about initialisation of a large Array with other initialiser of 0 for all across the Array length. See below in notes (1).

/* Notes */
// Initializer list: The entire set of values inside {} used to initialize the array.
// Initializer: Each individual value inside the initializer list (in your example, just the 0).
// Element: Each position in the array, e.g., arr, arr[1], etc.
// First element: The element at position 0 (arr).

// In C there is an idiom on C99, where by initialising one element with a value X then rests elements of the whole Array length initialises zero.

// For example:
// int arr[100] = {1};
// ^ Here, the arr[0] = 1 as the initialiser is 1
// Due to C99 idiom rests elements initialised with 0, arr[1] = 0; , arr[2] = 0; , etc

// (1) Initialising an Array with the same preferred initialiser for the whole length of the Array:
// #include <stdio.h>

// int main (void)
// {
//     int array_values[100]; /* Set lentgh of an Array, 101 */
//     int i;
    
//     for (i = 0; i <= 100; ++i) /* Use of for loop inside program to initialise full length of the Array with 1 */
//         array_values[i] = 1;
    
//     for (i = 0; i <= 100; ++i)
//         printf("array_values[%i] = %i\n", i, array_values[i]);

//     return 0;
// }

// OUTCOME
// Your Output
// array_values[0] = 1
// array_values[1] = 1
// array_values[2] = 1
// array_values[3] = 1
// array_values[4] = 1
// array_values[5] = 1
// array_values[6] = 1
// array_values[7] = 1
// array_values[8] = 1
// array_values[9] = 1
// array_values[10] = 1
// array_values[11] = 1
// array_values[12] = 1
// array_values[13] = 1
// array_values[14] = 1
// array_values[15] = 1
// array_values[16] = 1
// array_values[17] = 1
// array_values[18] = 1
// array_values[19] = 1
// array_values[20] = 1
// array_values[21] = 1
// array_values[22] = 1
// array_values[23] = 1
// array_values[24] = 1
// array_values[25] = 1
// array_values[26] = 1
// array_values[27] = 1
// array_values[28] = 1
// array_values[29] = 1
// array_values[30] = 1
// array_values[31] = 1
// array_values[32] = 1
// array_values[33] = 1
// array_values[34] = 1
// array_values[35] = 1
// array_values[36] = 1
// array_values[37] = 1
// array_values[38] = 1
// array_values[39] = 1
// array_values[40] = 1
// array_values[41] = 1
// array_values[42] = 1
// array_values[43] = 1
// array_values[44] = 1
// array_values[45] = 1
// array_values[46] = 1
// array_values[47] = 1
// array_values[48] = 1
// array_values[49] = 1
// array_values[50] = 1
// array_values[51] = 1
// array_values[52] = 1
// array_values[53] = 1
// array_values[54] = 1
// array_values[55] = 1
// array_values[56] = 1
// array_values[57] = 1
// array_values[58] = 1
// array_values[59] = 1
// array_values[60] = 1
// array_values[61] = 1
// array_values[62] = 1
// array_values[63] = 1
// array_values[64] = 1
// array_values[65] = 1
// array_values[66] = 1
// array_values[67] = 1
// array_values[68] = 1
// array_values[69] = 1
// array_values[70] = 1
// array_values[71] = 1
// array_values[72] = 1
// array_values[73] = 1
// array_values[74] = 1
// array_values[75] = 1
// array_values[76] = 1
// array_values[77] = 1
// array_values[78] = 1
// array_values[79] = 1
// array_values[80] = 1
// array_values[81] = 1
// array_values[82] = 1
// array_values[83] = 1
// array_values[84] = 1
// array_values[85] = 1
// array_values[86] = 1
// array_values[87] = 1
// array_values[88] = 1
// array_values[89] = 1
// array_values[90] = 1
// array_values[91] = 1
// array_values[92] = 1
// array_values[93] = 1
// array_values[94] = 1
// array_values[95] = 1
// array_values[96] = 1
// array_values[97] = 1
// array_values[98] = 1
// array_values[99] = 1
// array_values[100] = 1