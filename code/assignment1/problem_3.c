#include <stdio.h>
int main() {
    double result; /* The result of the division */
    int divisor = 22.0;
    result = 7.0 / divisor;
    printf("The result is %lf\n", result);
    return 0;
/*
First, in the first line of code, we need to add '#' before using the include.
Second, %d is used to format int, not a double. To properly print double, you need %lf
Third, to do floating point division, the numerator should be a floating point. Fix by adding a decimal point and a zero after 7.
*/
}
