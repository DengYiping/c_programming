/*
    JTSK-320111
    assignment5.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

double norm(double vec[], int size){
    double square_sum = 0.0;
    for(int i = 0; i < size; i++){
        square_sum += vec[i] * vec[i];
    }
    //return the sum divided by size
    //
    return square_sum / size;
}
void printmaxmin(double vec[], int size){
    double max = vec[0];
    int max_idx = 0;
    double min = vec[0];
    int min_idx = 0;

    //iterate through and chekc the max and min1
    for(int i = 1; i < size; i++){
        if(vec[i] < min){
            min = vec[i];
            min_idx  = i;
        }
        if(vec[i] > max){
            max = vec[i];
            max_idx = i;
        }
    }
    printf("the max %lf occurs at %d\n", max, max_idx);
    printf("the min %lf occurs at %d\n", min, min_idx);
    //print the result
}
        

int main(){
    char buf[100];
    int n;
    double* d_arr;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    //read n
    d_arr = (double*) malloc(sizeof(double) * n);

    for(int i = 0; i < n; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%lf", d_arr + i);
    }
    //read the input

    printf("the norm: %lf\n", norm(d_arr, n));
    printmaxmin(d_arr, n);

    free(d_arr);
    //free the resources
}
