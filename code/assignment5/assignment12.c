/*
    JTSK-320111
    assignment12.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#define true 1
#define false 0
#define bool int
//annoying boolean variable

void myreplace(char *str, char c, char e){
    while(*str != '\0'){
        if(*str == c)
            *str = e;
        str++;
    }
}
bool isEnd(char *str){
    for(int i = 0; i < 5; i++){
        if(str[i] == '\0')
            return false;
    }
    if(str[0] == 'q' && str[1] == 'u' && str[2] == 'i' && str[3] == 't' && str[4] == '\n')
        return true;
    return false;
    //to check if it is the end
}

int main(){
    char buf[100];
    char str[100];
    while(1){
        fgets(str, sizeof(str), stdin);
        if(isEnd(str))
            return 0;
        char c, e;
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%c", &c);
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%c", &e);

        printf("Before: %s\n", str);
        myreplace(str, c, e);
        printf("After: %s\n", str);
    }
        
}
