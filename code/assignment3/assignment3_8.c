/*
    JTSK-320111
    assignment3_8.c
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
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n); 

    //guarded input
    if(ch < 64 || ch > 90)
        return 1;
    if(n <= 0 || n > 32)
        return 1;
    char n_char;
    for(int i = 0; i <= n; i++){
        n_char = i + ch;
        printf("%c\n", n_char);
    }//print the result
}
