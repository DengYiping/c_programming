/*
    JTSK-320111
    assignment6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

double maxdiff(double arr[], int n){
    double max = arr[0];
    double min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    return max - min;
    //calculate the max and min, then calculate the difference
}

int main(){
    char buf[100];
    int n;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    //read n

    double* d_arr = (double*) malloc(sizeof(double) * n);
    if(d_arr == NULL)
        exit(1);
    for(int i = 0; i < n; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%lf", d_arr + i);
    }
    printf("the max difference %lf\n", maxdiff(d_arr, n));
    free(d_arr);
}
