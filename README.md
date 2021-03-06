# 30 day Coding Challenge by TechGig

* All programs are written in C++
* Links after the solution are references
* New syntax learned is summarized

## Day 1: Hello TechGig

[Solution](1-Hello.cpp)

### References

1. [GFG - Getline](https://www.geeksforgeeks.org/getline-string-c/)

### Syntax

```c++
istream& getline(istream& is, string& str, char delim);
```

**Description**: extracts characters from the input stream and appends it to the string object until the delimiting character is encountered

**Parameters**:

1. `is`: Object of istream class. Tells the function about the stream from where to read the input from.
2. `str`: String object. Input is stored in this object after being read from the stream.
3. `delim`: Delimitation character. Tells the function to stop reading further input after reaching this character.

**Returns**: This function returns the same input stream as is which is accepted as parameter.

## Day 2: Exploring Data Types

[Solution](2-Data_Types.cpp)

### References

1. [TutorialsPoint - Sscanf](https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm)
2. [GFG - Find input data type](https://www.geeksforgeeks.org/program-find-data-type-user-input/)

### Syntax

```c++
int sscanf(const char *str, const char *format, ...)
```

**Description**: reads formatted input from a string.

**Parameters**:

1. `str`: C string that the function processes as its source to retrieve the data.
2. `format`: This is the C string that contains one or more of the following items: Whitespace character, Non-whitespace character and Format specifiers.

**Returns**:
On success, the function returns the *number of variables filled*. In the case of an input failure before any data could be successfully read, EOF is returned.

## Day 3: Play with operators

[Solution](3-Operators.cpp)

## Day 4: Decide yourself with conditional statement

[Solution](4-Conditionals.cpp)

## Day 5: Loop your world

[Solution](5-Factorial.cpp)

## Day 6: How Much Big Is Your Number

[Solution](6-N_Digits.cpp)

## Day 7 : Count special numbers between boundaries

[Solution](7-Primes.cpp)

### Practice

1. [Calculate Power (Recursive)](7-Calculate_Power_Recursive.cpp)

### References

1. [GFG - Primality Test using Fermat's Theorem](https://www.geeksforgeeks.org/primality-test-set-2-fermet-method/)
2. [GFG - Iterative power function](https://www.geeksforgeeks.org/write-an-iterative-olog-y-function-for-powx-y/)
3. [GFG - Calculate Power](https://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/)
4. [GFG - Modular Exponentiation](https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/)

## Day 8: Is your Number Armstrong?

[Solution](8-Armstrong.cpp)

### References

1. [GFG - Ternary Operator](https://www.geeksforgeeks.org/conditional-or-ternary-operator-in-c-c/)

### Syntax

```c++
variable = Expression1 ? Expression2 : Expression3;
```

Can also be visualized as:

```c++
if(Expression1)
{
    variable = Expression2;
}
else
{
    variable = Expression3;
}
```

## Day 9: Is Your Number Narcissistic?

[Solution](9-Narcissistic.cpp)

## Day 10: Who's the second largest?

[Solution](10-Second_largest.cpp)

### References

1. [GFG - Second largest](https://www.geeksforgeeks.org/find-second-largest-element-array/)

### Syntax

Single array initialization in C++:

```C++
int* arr = new int[n];
```

## Day 11: Count the letters

[Solution](11-Count_letters.cpp)

## Day 12: Patch Up Two Matrices

[Solution](12-Matrix_addition.cpp)

### References

1. [Stackoverflow - 2D Array Intialization](https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new)

### Syntax

A dynamic 2D array is basically an array of pointers to arrays. You can initialize it using a loop, like this:

```C++
int** a = new int*[rowCount];
for(int i = 0; i < rowCount; ++i)
    a[i] = new int[colCount];
```

The above, for `colCount= 5` and `rowCount = 4`, would produce the following:

![2D array initialization](https://i.stack.imgur.com/M75kn.png "2D array initialization")

## Day 13: Roll your matrix

[Solution](13-Transpose.cpp)