/*
    JTSK-320111
    assignment4_3.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
double to_kilogram(int pound, int ounce){
    //input: pound as int and ounce as int
    //output in kilogram as double
    return (453.6 * pound + 28.350 * ounce) / 1000.0;
}

int main(){
    char buf[100];
    int oz, pd;
    printf("input pound\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &pd);
    printf("input ounces\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &oz);
    printf("in kilogram %lf\n", to_kilogram(pd, oz));

}
