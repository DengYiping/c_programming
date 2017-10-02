/*
    JTSK-320111
    assignment9.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int getInt(char* f_name);
int getInt(char* f_name){
    //helper func to get integer from file

    char buf[100];
    int res;
    FILE* f_r = fopen(f_name, "r");
    fgets(buf, sizeof(buf), f_r);
    sscanf(buf, "%d", &res);
    fclose(f_r);
    return res;
}

void writeInt(char* f_name, int n){
    //helper function to write a integer to a file
    FILE* f_w = fopen(f_name, "w");
    fprintf(f_w, "%d\n", n);
    fclose(f_w);
}



int main(){
    char buf[100];
    char f_str_1[100];
    char f_str_2[100];
    int n1;
    int n2;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%s", f_str_1);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%s", f_str_2);
    //read the file name
    //get interger from the file
    n1 = getInt(f_str_1);
    n2 = getInt(f_str_2);

    //write the result
    writeInt("sum.txt", n1 + n2);

}
