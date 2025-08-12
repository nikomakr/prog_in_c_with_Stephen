/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

int gcd  (int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u; /* As the function returns something then we put int before function's name. */
}

int main (void)
{
    int result;

    result = gcd (150, 35); /* Assigning values to the variable */
    printf("The gcd of 150 and 35 is %i\n", result);

    result = gcd (1026, 405);
    printf("The gcd of 1026 and 405 is %i\n", result);

    printf("The gcd of 83 and 240 is %i\n", gcd (83, 240)); /* Values passed directly to printf */

    return 0;
}

/* OUTCOME */
// The gcd of 150 and 35 is 5
// The gcd of 1026 and 405 is 27
// The gcd of 83 and 240 is 1

/* Notes */
// That's the first program, which has two functions wehere both of them return at least one value.

/* Comment*/
// A C can only return a single value, unlike other programming languages. 
// So, there is only the function in C, which optionally can return a value.
// int at the beginning of declaration of a function sygnals the compiler that the function returns a value.

// A function can return:
// 	•	Any integral type (_Bool, char, short, int, long, long long, and all their signed/unsigned variants)
// 	•	Any floating-point type (float, double, long double, and _Complex variants)
// 	•	Pointer types (e.g., int*, char*, struct MyStruct*)
// 	•	struct types (user-defined structures)
// 	•	union types (user-defined unions, though not anonymous unions—must be named)
// 	•	enum types (user-defined enumerations)
// 	•	void (for functions that do not return a value)
// 	•	Function pointers (pointers to other functions)
// What’s not allowed:
// 	•	Functions cannot return a function type itself (but can return a pointer to a function)
// 	•	Functions cannot return an array type (but can return a pointer to the first element of an array)
// 	•	Not allow returning an anonymous struct/union directly as a return type—they must be named