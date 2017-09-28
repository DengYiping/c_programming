/*
    JTSK-320111
    assignment2.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    fgets(buf, sizeof(buf), stdin);
    //read the input
    int indent = 0;
    //represent the indentation at each level
    for(int i = 0; i < 100; i++){
        char c = buf[i];
        //this is the end of a line, end of programm
        if(c == '\n' || c == '\0'){
            printf("\n");
            return 0;
        }
        for(int j = 0; j < indent; j++){
            printf(" ");
        }
        printf("%c\n", c);
        indent++;
    }
}
