
Pointers:-
    *Pointers in C language is a variable that stores/points the address of another variable.
    *A Pointer in C is used to allocate memory dynamically i.e. at run time.
    *The pointer variable might be belonging to any of the data type such as int, float, char, double, short etc.
    *Pointer Syntax : data_type *var_name; Example : int *p;  char *p;
    *Where, * is used to denote that “p” is pointer variable and not a normal variable.

Strings:-
    *Strings are defined as an array of characters. The difference between a character array
     and a string is the string is terminated with a special character ‘\0’.
    *Declaration of strings: Declaring a string is as simple as declaring a one dimensional array.
     Below is the basic syntax for declaring a string.

     char str_name[size];

Array:-

    *An array is a group (or collection) of same data types.
    *For example an int array holds the elements of int types while a float array holds the elements of float types.

Dynamic Memory Allocation:-
    *Dynamic Memory Allocation can be defined as a procedure in which the
     size of a data structure (like Array) is changed during the runtime.

    *C provides some functions to achieve these tasks.
    *There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic
     memory allocation in C programming. They are:

     malloc()
     calloc()
     free()
     realloc()


Array and pointer:-
    *When an array is declared, compiler allocates sufficient amount of memory to contain all the elements of the array. Base address i.e address of the first element of the array is also allocated by the compiler.
    Suppose we declare an array arr,

    *int arr[5] = { 1, 2, 3, 4, 5 };

    *Assuming that the base address of arr is 1000 and each integer requires two bytes.

    *Here variable arr will give the base address, which is a constant pointer pointing to the first
     element of the array, arr[0]. Hence arr contains the address of arr[0] i.e 1000.

    *In short, arr has two purpose - it is the name of the array and it acts as a pointer pointing towards the
     first element in the array.
     arr is equal to &arr[0] by default

    *We can also declare a pointer of type int to point to the array arr.

Array and structure:-
    *Array refers to a collection consisting of elements of homogenous data type.
    *Structure refers to a collection consisting of elements of heterogenous data type.

Structure and Union:-
    *A structure is a user-defined data type available in C that allows to combining data items of different kinds.
    *Structures are used to represent a record.
    *A union is a special data type available in C that allows storing different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time.
    *Unions provide an efficient way of using the same memory location for multiple purposes.
Macro and Function:-
    *Macros are pre-processed which means that all the macros would be processed before your program compiles.
    *However, functions are not preprocessed but compiled.
String and Character array:-
     *String is a sequence of characters that is treated as a single data item and terminated by null character '\0'.
     *Remember that C language does not support strings as a data type.
     *A string is actually one-dimensional array of characters in C language.
     *These are often used to create meaningful and readable programs.
     *For example: The string "hello world" contains 12 characters including '\0' character which is automatically
      added by the compiler at the end of the string.

