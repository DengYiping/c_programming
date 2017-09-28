# Dynamic Memory Allocation
We should use `void* malloc(unsigned int size);`

First, you need to include the header file
```
#include <stdlib.h>
```
To do dynamic memory management:
```
int* dyn_array = (int*) malloc(sizeof(int) * 1000);
if(dyn_array = NULL){
    exit(1);
}
//to check the memory is properly allocated
dyn_array[1] = 1;
free(dyn_array);
//free the memory allocated
```

# Multi-dimentional Arrays in C
It is necessary to specify the size of each dimension
```
int matrix[10][20];
float cube[20][3][200];
matrix[1][2] = 1;
```

# const
```
const char str[] = 'Hello World';
```
You can also use `#define` for preprocessing.

# const pointer and pointer to const
`const char *text = "Hello";`
`char *const name = "Test";
```const char *const name = "test"```

# recursive function
a function that call itself

# Building from Multiple Sources
```
gcc -o exename 1.c 2.c 3.c
```
Libraries are collection of compiled definitions

You include header file to get the declarations of objects in libraries.

At linking time libraries are searched for unresolved declarations.

Some libraries are included by gcc even if you do not specifically ask for them.

`gcc -lm - o compute compute.c`

# File Handling in C
