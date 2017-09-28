/*
    JTSK-320111
    assignment11.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int count_char(char *str, char c){
    int count = 0;
    while(*str != '\0'){
        if(*str == c)
            count++;
        str++;
    }
    return count;
    //simpliy count the occurence
}
void print_count(char *str, char c){
    printf("The character '%c' occurs %d times.\n", c, count_char(str, c));
}

int main(){
    char buf[100];//a buffer
    int n;//maximum of character

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    //read n

    char* d_str = (char*) malloc(sizeof(char) * (n + 2)); 
    //allocate two extra byte, one for \n and one for \0
    if(d_str == NULL)
        exit(1);
    fgets(d_str, sizeof(char) * (n + 1), stdin);
    //read the input
    print_count(d_str, 'B');
    print_count(d_str, 'p');
    print_count(d_str, 'i');
    print_count(d_str, 'D');
    print_count(d_str, 'z');
    
    free(d_str);    
    

}
