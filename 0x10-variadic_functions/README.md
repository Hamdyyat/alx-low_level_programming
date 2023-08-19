0x10. C - Variadic functions

stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments

Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf.

A.2 Variadic Functions
ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.

A.2.2 How Variadic Functions are Defined and Used
Defining and using a variadic function involves three steps:
Define the function as variadic, using an ellipsis (‘…’) in the argument list, and using special macros to access the variable arguments. See Receiving the Argument Values.
Declare the function as variadic, using a prototype with an ellipsis (‘…’), in all the files which call it. See Syntax for Variable Arguments.
Call the function by writing the fixed arguments followed by the additional variable arguments. See Calling Variadic Functions.
