/*
    JTSK-320111
    assignment3.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
int count_upper(char* str){
    int count = 0;
    while(*str != '\n' && *str != '\0'){
        if(isupper(*str))
            count++;
        str++;
        //iterate through the string
    }
    return count;
    //return the result
}


int main(){
    char str[100];
    while(1){
        //get the string
        fgets(str, sizeof(str), stdin);
        if(str[0] == '\n')
            return 0;
        printf("the number of upper case: %d\n", count_upper(str));
    }
    return 0;
}
