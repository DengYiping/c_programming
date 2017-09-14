#include <stdio.h>
int main() {
    float answer; /* The result of our calculation */
    answer = 1.0/8;
    printf("The value of 1/8 is %f\n", answer);
    return 0;
/*
The division of int and int will still be a int, to do float division, numerator should be a floating point type.

The result 0.00000 is due to 1. the int / int division gives you a int of 0, and then the printf do a conversion from int 0 to float 0.000000
We change 1 to 1.0 to tell the compiler to do floating point division.
*/
}
