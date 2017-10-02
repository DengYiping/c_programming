/*
    JTSK-320111
    assignment1.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
void printRec(char ch, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
}




int main(){
    char buf[100];
    char ch;
    int r;
    int c;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &ch);
    //read inputs of ch
    
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &r);
    //read rows

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &c);

    //print
    printRec(ch, r, c);
}
