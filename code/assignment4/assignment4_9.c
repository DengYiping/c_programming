/*
    JTSK-320111
    assignment4_9.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int idx_calc(char* c1, char* c2){
    //to calculate the difference of two pointer and 
    //return it as a index
    return (int) (c2 - c1);
}

int main(){
    char s1[100];
    char s2[100];
    char cps[100];
    char result[200];
    
    //initialization
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    //do some job in the previous assignment problem
    printf("the length of s1: %d\n", (int) strlen(s1));
    printf("the length of s2: %d\n", (int) strlen(s2));

    //first copy, then concate
    strcpy(result, s1);
    strcat(result, s2);
    printf("the concated string is: %s\n", result);

    strcpy(cps, s1);
    printf("the copied string is: %s\n", cps);

    //compare s1 and s2
    int cmp_result = strcmp(s1, s2);
    if(cmp_result == 0)
       printf("the result is %d, menas it is the same\n", cmp_result);
    else
       printf("the result is %d, menas it is not the same\n", cmp_result);
    /* start the searching algorithm
     * based on pointer operation, use a array as a char* pointer
     * use idx_calc function to calculate the index based on pointer */
    printf("enter the character to search\n");
    char buf[100];
    char c;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &c); 
    char* chr_result;
    char* position = s1;
    //denoting the current position
    const int s1_len = strlen(s1);
    while(idx_calc(s1, position) < s1_len){
        //make sure it is not out of bound
       chr_result = strchr(position, c);
       if(chr_result == NULL){
           printf("search end\n");
           break;
       } 
       printf("found at index %d\n", idx_calc(s1, chr_result));
       position = chr_result + 1;
       //pointer operation
    }
}
