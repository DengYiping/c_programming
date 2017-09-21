/*
    JTSK-320111
    assignment3_2.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    int input;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d",  &input); //get the input
    if(input % 7 == 0 && input % 4 == 0){
        //check if it is divisible
        printf("The number is divisible by 4 and 7\n");
    }else{
        printf("The number is not divisble by 4 and 7\n");
    }
}
