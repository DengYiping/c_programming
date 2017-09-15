# Pointers: Introduction

Pointers are a variable

## Declaration and Initialization

`int *ptr;` this is the initialization of a int pointer.

## Referencing

```
int a = 10;
int *ptr;
ptr = &ptr;
```

& is the referencing operator, it returns the address of the pointing object.


## Dereference Operation

To access the pointing object, `printf("%d", *ptr)`

# Array

To store a set of element, we need a data structure -- array.

## Initialize Array

 - intialize when declaring `int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};`
 - initalize by element `array[2] = 0;`
 - for gcc, you can do `int array[1024] = {[0 ... 1023] = 5};`

# String
 - string is a char array with a ending `\0` (0x00)
 - you can do things like `char name[20] = "hello world!";`
 - read string by using fgets
 - cast the input by using sscanf
```
#include <stdio.h>

int main(){
	char line[100];
	int value;
	printf("Enter a value:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);
	printf("You entered: %d\n", value);
	return 0;
}
```
