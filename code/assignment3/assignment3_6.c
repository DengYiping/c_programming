/*
    JTSK-320111
    assignment3_6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    char ch;
    int n;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &ch);
    while(1){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &n);
        if(n >= 0){
            break;
        }
    }//guarded input for n
    for(int i=0; i < n; ++i){
        printf("%c ", ch);
    }//print the result
    printf("\n");
}
