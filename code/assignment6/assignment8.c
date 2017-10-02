/*
    JTSK-320111
    assignment8.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    char c;
    FILE* f_r = fopen("char.txt", "r");
    fgets(buf, sizeof(buf), f_r);
    sscanf(buf, "%c", &c);
    fclose(f_r);
    //read the char from the file and close the file

    FILE* f_w = fopen("code.txt", "w");
    fprintf(f_w, "%d\n", c);
    //flush, otherwise it will not be any output
    //fflush(f_w);
    fclose(f_w);

}
