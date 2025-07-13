/* Chapter4 Ex03 Which of the following are invalid constrants? Why? */

/* 123.456
Valid */
/* 0x10.5
Invalid: Hexadecimal constants cannot have a decimal point. */
/* 0X0G1
Invalid: ‘G’ is not a valid hexadecimal digit. */
/* 0001
Valid */
/* 0xFFFF
Valid */
/* 123L
Valid */
/* 0Xab05
Valid */
/* 0L
Valid */
/* -597.25
Valid */
/* 123.5e2
Valid */
/* .0001
Valid */
/* +12
Valid */
/* 98.6F
Invalid: ‘F’ is not a valid suffix for floating-point constants in C/C++. */
/* 98.7U
Valid */
/* 17777s
Invalid: ‘s’ is not a valid suffix for numeric constants in C/C++. */
/* 0996
Invalid: Octal constants (starting with 0) can only use digits 0-7; ‘9’ is not allowed. */
/* -12E-12
Valid */
/* 07777
Valid */
/* 1234uL
Valid */
/* 1.2Fe-7
Invalid: ‘F’ should be at the end, not in the middle of scientific notation. */
/* 15,000
Invalid: Commas are not allowed in numeric constants. */
/* 1.234L
Valid */
/* 197u
Valid */
/* 100U
Valid */
/* 0XABCDEF1
Valid */
/* 0xabcu
Invalid: ‘u’ is not a valid suffix for hexadecimal constants; only for integers. */
/* +123
Valid */
