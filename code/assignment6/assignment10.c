/*
 *     JTSK-320111
 *         assignment10.c
 *             Yiping Deng
 *                 y.deng@jacobs-university.de
 *                 */

#include <stdio.h>

int main(){
    FILE* f_r = fopen("text.txt", "r");
    FILE* f_w = fopen("text_copy.txt", "w");
    char ch;
    while((ch=getc(f_r)) != EOF){
        putc(ch, f_w);
    }
    fclose(f_r);
    fclose(f_w);
}
