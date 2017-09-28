/*
    JTSK-320111
    assignment13.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef BOOLEAN
#define bool int
#define true 1
#define false 0
#endif

//trick to introduce boolean value here


bool isEnd(char *str){
    //to check if the user want to exit the program
    if(strcmp(str, "exit\n") == 0)
        return true;
    return false;
}
void mixcase(char *str){
    while(*str != '\0'){
        //change lowers and uppers at every position
        if(islower(*str))
            *str = toupper(*str);
        else if(isupper(*str))
            *str = tolower(*str);
        str++;
        //pointer operation
    }

}


int main(){
    char buf[82];
    while(1){
        fgets(buf, sizeof(buf), stdin);
        if(isEnd(buf))
            return 0;
        mixcase(buf);
        printf("%s\n", buf);
    }
    return 0;
}
