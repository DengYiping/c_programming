
# Programming in C

## Class Site
[site](http://minds.jacobs-university.de/teaching/ProgCFall2017)

## Grading Scheme

 - 35% programming assignment
 - 65% final exam ( in Oct.)

## Programming Assignment

To submit, use [Grader](http://grader.eecs.jacobs-university.de)


Grading Criteria: [doc](http://minds.jacobs-university.de/sites/default/files/uploads/teaching/CProgramming/Grading-Criteria-C.pdf)


## About C

 - Widely used general purpose language
 - Consider von Neumann architecture
 - C is a higher programming language ( loops, conditions)


## C Program Development Cycle

Editor --> Source Code --> Compiler --> Object Code  --\/

Running Program <-- Operating System <-- Executable Code <-- Linker(with libraries)

## Basic Data Types of C

 | Data type | C identifier |
 | --------- | ---- |
 | Character | char |
 | Integer number | int |
 | Floating point number | float |
 | Double precision number | double |
 | No type | void |

## ASCII table

[link to ascii table](https://johnantoni.github.io/ascii/)

## Variables

 - A variable is anamed location in the computers memory used to store a certain data type
 - The type of a variable is fixed

### Declaring Variable & Initialization

 - First data type and then variable name
 _ Using a non-initialized variable is a common error

### Naming variables
 - avoid too short or too long name
 - loop variables are usually `i, j, k, l`
 - A variable cannot have the same name as in the scope

### Modifiers
 - C provides some modifiers that apply to the basic data types
 - The long modifier can be applied to the int and double data types
 - The signed and unsigned modifiers can be applied to int and char data types
 - The short modifier can be applied to the int data type

## Operators
 - Operators perform mathematical or logical operations on data
 - Can be roughly divided in arithmetic, relational and logical operators

### Arithmetic Operators
 - `+`, `-`, `*`, `/`, `%`
 - division can be tricky:

Expressions with integer and floating-point values
It is quite common to use expressions involving both integer and floating-point values, for example,

a / 3 where a is float

n * 0.25 where n is int

In C, the rule for such expressions is:

If either operand of an arithmetic operator is floating-point, the calculation is done in floating-point arithmetic. The calculation is done in double unless both operands are float, in which case the calculation is done in float.

In the first example above, the integer 3 is converted to float and the calculation is done in float. In the second example, n is converted to double (since 0.25 is double) and the calculation is done in double. 

## printf
 - `%d`, `%f`, `%s`, `%o`, `%x`, `%p`, `%c` means decimal, floating point, string(char*) octat, hex, pointer, charactor
 - `%9.6f` means up to 6 digit after decimal point, a dot, and 2 digit before the dot

