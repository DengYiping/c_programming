#include <stdio.h>
int main() {
    int answer; /* The result of our calculation */
    answer = 3 + 12;
    printf("The answer is %d\n", answer);
    return 0;
/*
Explain:
To print a variable in the scope via printf, you need to properly format the string, and add the variable that need to print in the printf function code.

In printf, properly format a string and call the function without add the variable as a arguments will be a undefined behavior.

*/

}
