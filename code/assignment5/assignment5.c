/*
    JTSK-320111
    assignment5.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int count_consonants(char str[]){
    int count = 0;
    char* ptr = str;
    while(*ptr != '\n' && *ptr != '\0'){
        //pointer operations
        char c = *ptr;
        ptr = ptr + 1;
        //let it fall through the switch case
        switch(c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}

int main(){
    char buf[100];
    while(1){
        fgets(buf, sizeof(buf), stdin);
        if(buf[0] == '\n')
            break;
        printf("num of consonants %d\n", count_consonants(buf));
    }

}
