/* Chapter7 EX01 Type in and run the eight programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

/* 7.7 Converting a Positive Integer to Another Base */

#include <stdio.h>

int main(void)
{
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' }; /* Due to Hexadecimal (1) */

	int      convertedNumber[64]; /* Due to Binary numbers upto 64 digits/bits (2) */
	long int numberToConvert;
	int      nextDigit, base, index = 0;

	/* get the number and the base */
	printf("Number to be converted? ");
	scanf("%ld", &numberToConvert); /* long integer */

	printf("Base? ");
	scanf("%i", &base);

	/* convert to the indicated base (3) */
	do {
		convertedNumber[index] = numberToConvert % base; /* (3) i)*/
		++index; /* (3) iv) As the index increments saves the outcome and moves on */
		numberToConvert = numberToConvert / base; /* (3) ii) */
	} while (numberToConvert != 0); /* (3) iii) */

	/* display the results in reverse order */
	printf("Converted number = ");
	for (--index; index >= 0; --index)
    {
		nextDigit = convertedNumber[index]; /* Gets the last digit in index */
		printf("%c", baseDigits[nextDigit]); /* Prints out character by character in reverse order */
	}

	printf("\n");

	return 0;
}

/* OUTCOME */

/* Comment */
// (1) The keyword const in C is used to declare that a variable or array is constant, meaning its value cannot be changed after initialisation.
// Means the content of the Array is read-only. More in Notes!
// baseDigits[16] : 16 chosen because they represent the digits used in positional number systems from base 2 up to base 16 (hexadecimal)

// (3) As we have been instructed by the exercise:
// i) A digit of the converted number is obtained by taking the modulo of the number by the base
// ii) the number is then divided by the base, with any fractional remainder discarded (that means int)
// iii) the process is repeated until the number reaches zero (due to int gets there)
// iv) the outlined procedure generates the digits of the converted number starting from the rightmost digit


/* Notes */
// Use const with variables or function arguments that should never be modified.
// This serves two main purposes:
// •	Protection: It prevents accidental changes to these values elsewhere in your code.
// •	Optimisation and Safety: The compiler may optimise for or warn you if you try to modify a `const` value.

// const can go for:
// Arrays (1D One-Dimensional, Multidimensional, Array pointers
// both the pointer and the data it points
// read-only string or char arrays
// Function arguments

// When to use `const`:
// 	•	To protect input data from unintentional changes.
// 	•	To make your code easier to understand and safer.
// 	•	To let the compiler help you spot mistakes if you try to change something you marked as constant.
// You will most often use `const`:
// 	•	With arrays or pointers passed to a function when you do not want to modify the data.
// 	•	When writing functions that process but do not alter the given data (e.g., print, search, compare functions).

// (2) When you convert a decimal integer to another base, the smallest base (base 2, binary) produces the maximum number of digits because each binary digit encodes only one bit.
// How programmers subconsciously estimate it:
// 	•	They consider the maximum value type they want to support (here, `long int`).
// 	•	They know the smallest base to expect (usually base 2, the worst case).
// 	•	They know “number of digits needed” is, at most, the number of bits of their type.
// 	•	A quick estimation (without even formal calculation): “For 64-bit numbers, just allow 64 digits—this is always safe.”

// •	Base 1: Unary numeral system
// •	Base 2: Binary
// •	Base 3: Ternary (or Trinary)
// •	Base 4: Quaternary
// •	Base 5: Quinary
// •	Base 6: Senary (or Seximal)
// •	Base 7: Septenary (or Septimal)
// •	Base 8: Octal
// •	Base 9: Nonary
// •	Base 10: Decimal
// •	Base 11: Undecimal (or Eleventh)
// •	Base 12: Duodecimal (or Dozenal)
// •	Base 13: Tridecimal
// •	Base 14: Tetradecimal
// •	Base 15: Pentadecimal
// •	Base 16: Hexadecimal