/*
    JTSK-320111
    assignment4_7.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
double sum(double a, double b){
    //input: two double
    //output: sum of two double
    return a + b;
}

void sumbyref(double a, double b, double* s){
    *s = a + b;
    //pass the result by reference
}

void swapbyref(double* a, double* b){
    //swap the value and return by reference
    double c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    double a;
    double b;
    double s;
    char buf[100];
    //input
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &a);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &b);

    //call series of function and get result
    printf("the sum function: %lf\n", sum(a, b));
    sumbyref(a, b, &s);
    printf("the sum of sumbyref function: %lf\n", s);
    swapbyref(&a, &b);
    printf(" the swapped value of a: %lf b: %lf\n", a, b); 
}
