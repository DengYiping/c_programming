/*
    JTSK-320111
    assignment1.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int lower;
    int upper;
    char buf[100];
    //read the upper and the lower bound
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &lower);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &upper);
    for(int i = lower; i <= upper; ++i){
        int sq = i * i;
        int cubic = sq * i;
        //print the result in the proper format
        printf("%12.3f%12.3f%12.3f\n",(float) i, (float) sq, (float) cubic); 
    }
}
