The one dimension Arrays, 1D Arrays, called linear Arrays.

However, C allows  arrays of any dimension to be defined.

Those called Multidimensional Arrays.
Those can have multiple rows and columns!
Keep in mind we are in Arrays, which means rows start with 0 and columns with 0.

In Maths we used to refer to as Array name M with i number of rows and j number of columns aka Mi,j 
In C the equivalent is written M[i],[j]

Due to the above we can even have operations such as sum = M[0][2] + M[2][4];

Declaration is as of 1D Arrays:
int M[4][5];

Initialisation for values are listed by row. 
Braces pairs are used to seperate the list of initialisation for one row from the next.
So, we have:
int M[4][5] = {
                { 10, 5, -3, 17, 82 },
                { 9, 0, 0, 8, -7 },
                { 32, 20, 1, 0, 14 },
                { 0, 0, 8, 7, 6 }
            };
The above structure is to initialise the Array with known elements for the full length of the Array.

The use of inner pairs of braces is actually optional. If not supplied (the Arrays), initialisation proceeds by row:
int M[4][5] = { 10, 5, -3,17, 82, 9, 0, 0, 8, -7, 32, 20, 1, 0, 14, 0, 0, 8, 7, 6 };


If not supplied with full list of elements, then it can still initialise the Array, for example:
int M[4][5] = = {
                { 10, 5, -3 },
                { 9, 0, 0 },
                { 32, 20, 1 },
                { 0, 0, 8 }
            };
only initialises the first three elements of each row to the indicated values.
The remaining values are set to 0.
In this case the braces required! Are mandatory!

Subscripts can also be used, for example:
int matrix[4][3] = { [0][0] = 1, [1][1] = 5, [2][2] = 9 };
initialises the three indicated elements of matrix to the specific values.
The unspecified elements are set to zero by default.