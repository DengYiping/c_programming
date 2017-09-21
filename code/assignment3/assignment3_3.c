/*
    JTSK-320111
    assignment3_3.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    char c;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &c);
    if(c < 97){
        //97 is the lower case character a, and capitalized character are smaller
        printf("it is not lower case.\n");
    }else{
        printf("it is lower case.\n");
    }
}
