/*
    JTSK-320111
    assignment4_2.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
double convert(int mm){
    //a function that convert mm to meters.
    //input; length in mm
    //output: lenght in meter
    return mm * 1000.0;
}
int main(){
    char buf[100];
    int mm;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &mm);
    printf("in meter: %lf\n", convert(mm));
}
