/*
    JTSK-320111
    assignment4.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int count_consonants(char str[]){
    int count = 0;
    int idx = 0;
    while(str[idx] != '\n' && str[idx] != '\0'){
        char c = str[idx];
        idx++;
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
        //termination
        if(buf[0] == '\n')
            break;
        //print the result
        printf("num of consonants %d\n", count_consonants(buf));
    }

}
