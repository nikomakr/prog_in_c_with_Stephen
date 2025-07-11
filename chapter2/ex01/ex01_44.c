/* Chapter4 Ex01 4.4 Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output after each program in the text. */

/* Illustrating the Modulus Operator */

#include <stdio.h>

int main (void)
{
    int a = 25, b = 5, c = 10, d = 7;
    
    printf("a %% b = %i\n", a % b); 
    printf("a %% c = %i\n", a % c);
    printf("a %% d = %i\n", a % d);
    printf("a / d * d + a %% d = %i\n", a / d * d + a % d);
    
	return 0;
}

/* OUTCOME */
/* a % b = 0 
a % c = 5
a % d = 4
a / d * d + a % d = 25

/* Comment */
/* The only special treatment of operator within printf is the modulus due to the format string, where we are obliged to use percentage sign and letter(s) for printf chars. So, the %% because a single % is a special character in printf—it introduces a format specifier (like %i for integer). To actually use modulus (%) you literally type %% */