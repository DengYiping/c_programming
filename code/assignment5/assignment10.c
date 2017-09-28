/*
    JTSK-320111
    assignment10.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
void sumdiffproddiv(double a, double b, double *sum, double *diff, double *prod, double *div){
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    *div = a / b;
}

int main(){
    double a, b, sum, diff, prod, div;
    char buf[100];//the buffer
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &a);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%lf", &b);
    //get the value of a and b

    sumdiffproddiv(a, b, &sum, &diff, &prod, &div);
    printf("sum: %lf, difference: %lf, product: %lf, division: %lf\n", sum, diff, prod, div);

}
