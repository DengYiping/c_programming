# Type conversions
When data of different types are combined, some rules are applied.
Types are converted to a common type
 - usually to the larger one(called promotion)
 - A demotion is performed when a type is converted to samller one.
 - A demotion implies possible loss of information(be careful with what to expect)
It is possible to overcome standard conversions(casting)
Casting is a unary operator with high precedence.
```
float y;
int x;
y = 3.14;
x = (int) y;
//another example
int a;
float f1 = 3.456;
float f2 = 1.22;
a = (int) f1 * f2;
a = (int) (f1 * f2);
```
## Prefix and Postfix
 - ++a, when evaluated, is not increased.

##sizeof operator
```
int a;
printf("size int %lu\n", sizeof(a));
printf("size float %lu\n", sizeof(float));
printf("size double %lu\n", sizeof(double));
```

Compile-time operator will not work for dynamically allocated memory.
## boolean and relational operators
A boolean variable can assume only two logic values: true or false. 
 - && for and operation
 - || for or operation
 - ! for not operation
 - == equality test
 - != inequality test
 - > greater
 - < smaller
 - >= greater or equal
 - <= smaller or equal

