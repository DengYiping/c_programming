/*
    JTSK-320111
    assignment4_4.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
void print_frame(int n, int m, char c){
    printf("\n");
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1){
            for(int j = 0; j < m; j++){
                printf("%c", c);
            }
            printf("\n");
        }else{
            printf("%c", c);
            for(int j = 1; j < m - 1; j++){
                printf(" ");
            }
            printf("%c\n", c);
        }
    }
}

int main(){
    char buf[100];
    int n, m;
    char c;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &m);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &c);
    print_frame(n, m, c);


}
