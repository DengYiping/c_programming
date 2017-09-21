/*
    JTSK-320111
    assignment3_4.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int n;
    char buf[100];
    while(1){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &n);
        if(n >= 0)
            break;
    }//guarded input
    int i = 1;
    while(i <= n){
        if(i == 1){
            printf("1 minute is 60 seconds\n");
        }else{
            printf("%d minutes are %d seconds\n", i, i * 60);
        }
        i = i + 1;
    }
}
