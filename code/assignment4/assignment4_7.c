/*
    JTSK-320111
    assignment4_7.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
double sum(double a, double b){
    return a + b;
}

void sumbyref(double a, double b, double* s){
    *s = a + b;
}

void swapbyref(double* a, double* b){
    //magic trick to swap two value without a third one  
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
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &a);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &b);
    printf("the sum function: %lf\n", sum(a, b));
    sumbyref(a, b, &s);
    printf("the sum of sumbyref function: %lf\n", s);
    swapbyref(&a, &b);
    printf(" the swapped value of a: %lf b: %lf\n", a, b); 
}
