/*
    JTSK-320111
    assignment3_1.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int n = 2;
    while (n < 6){
        printf("n is %d\n", n);
        n++;
    } /* we shoud have a scope parathesis whenever there are multiline in loop */
    printf("That’s it.\n");
    return 0;
}
