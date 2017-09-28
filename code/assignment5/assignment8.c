/*
    JTSK-320111
    assignment8.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

void printMat(int n, int mat[][n]){
    printf("the matrix you entered: \n");

    //double for loop to iterate
    //through all the elements row by row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void printDig(int n, int mat[][n]){
    printf("the diagonal: \n");
    //go through the diagonol at index i, i
    for(int i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
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

    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fgets(buf, sizeof(buf), stdin);
            sscanf(buf, "%d", &matrix[i][j]);
        }
    }
    printMat(n, matrix);
    printDig(n, matrix);
}

