/*
    JTSK-320111
    assignment6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int sum_between(int n, int m){
    //recursive func
    if(n == m)
        return n;
    else
        return n + sum_between(n + 1, m);
}

int main(){
    char buf[100];
    int n;
    int m;
    //get the input
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &m);
    //calculate the result
    printf("the sum between %d and %d is %d\n", n, m, sum_between(n, m));
}
