/*
    JTSK-320111
    assignment9.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

void printMat(int n, int mat[][50]){
    printf("the matrix you entered: \n");
    //iterate through row by row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void printDig(int n, int mat[][50]){
    //print the secondary diagonal
    printf("the diagonal: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", mat[i][n - i - 1]);
    }
    printf("\n");

}

int main(){
    char buf[100];
    int n;//matrix size
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    if(n > 50)
        return -1;
    //make sure it is smaller than 50
    int matrix[50][50];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fgets(buf, sizeof(buf), stdin);
            sscanf(buf, "%d", &matrix[i][j]);
        }
    }
    printMat(n, matrix);
    printDig(n, matrix);
}

