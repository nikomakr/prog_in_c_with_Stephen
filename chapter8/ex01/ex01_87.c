/* Type in and run the 16 programs in this chapter. Compare the output produced by each program with the output presented after each program in the text. */

#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return x;
}

int main (void) 
{
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float result;

    result = absoluteValue (f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);

    result = absoluteValue (f2) + absoluteValue (f3); /* 1) */
    printf("result = %.2f\n", result);

    result = absoluteValue((float) i1); /* Explicit cast: converts int to float before calling */
    printf ("result = %.2f\n", result);

    result = absoluteValue (i1); /* Implicit cast: C automatically converts int to float for you */
    printf ("result = %.2f\n", result);

    printf("%.2f\n", absoluteValue (-6.0) / 4); /* the (-6.0) is simply the function call syntax absoluteValue(whatever) */

    return 0;
}

/* OUTCOME */
// result = 15.50
// f1 = -15.50
// result = 25.00
// result = 716.00
// result = 716.00
// 1.50

/* Comment */
// 1) Explanation just below:
// 1.  absoluteValue(f2) is called
//     ┌──────────────────────┐
//     | f2 = 20.0             |
//     └──────────────────────┘
//            │
//            ▼
//     CPU puts 20.0 into return register (xmm0)
//            │
//            ▼
//     Store xmm0 into Temp1 in a register or stack slot:
//         Temp1 = 20.0

// 2.  absoluteValue(f3) is called
//     ┌──────────────────────┐
//     | f3 = -5.0             |
//     └──────────────────────┘
//            │
//     Inside function: x < 0 so x = -x → 5.0
//            ▼
//     CPU puts 5.0 into xmm0

// 3.  Addition happens
//     ┌──────────────────────┐
//     | Temp1 (20.0) + xmm0   |
//     └──────────────────────┘
//            │
//            ▼
//        Sum = 25.0

// 4.  Store into variable 'result'
//     result = 25.0

/* Notes */
// The CPU does all the “thinking.”
// xmm0 is a fast, special spot inside the CPU for quick math.
// A stack slot is a slower spot in memory to hold things temporarily if needed.

// xmm0 is a special storage place (called a register) inside the CPU for holding floating point numbers (like decimals) during quick calculations, especially on modern Intel/AMD processors.