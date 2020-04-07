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

## Day 6: How Much Big Is Your Numbe

[Solution](6-N_Digits.cpp)
