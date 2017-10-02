/*
    JTSK-320111
    assignment7.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int gcd(int a, int b){
    //implementation of Euclid algorithm
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, a);
}
int main(){
    char buf[100];
    int a;
    int b;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &a);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &b);
    //get the input
    printf("the greatest common divisor of %d and %d is %d\n", a, b, gcd(a, b));
}
