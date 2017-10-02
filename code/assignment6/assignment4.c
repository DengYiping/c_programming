/*
    JTSK-320111
    assignment4.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
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
    char buf[100];
    int n;
    char* d_arr;
    while(1){
        //get the string
        fgets(buf, sizeof(buf), stdin);

        if(buf[0] == '\n')
            return 0;
        sscanf(buf, "%d", &n);

        d_arr = malloc(sizeof(char) * n);
        //dynamically allocate the memory

        if(d_arr == NULL)
            exit(1);

        fgets(d_arr, sizeof(char) * n, stdin);
        printf("the number of upper case: %d\n", count_upper(d_arr));
        free(d_arr);
    }
    return 0;
}
