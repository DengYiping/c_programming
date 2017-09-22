/*
    JTSK-320111
    assignment4_1.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int length(char str[]) {
     int idx;
     /* Loop until end of string */
     for(idx = 0; str[idx] != '\0'; ++idx){}
     return idx;
     //we should terminate the for loop, otherwise the return
     //will be in for loop
}
int main(){
    char line[100];
    while(1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("Length (including newline) is: %d\n", length(line));
    }
}
