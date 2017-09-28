/*
    JTSK-320111
    assignment7.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void print2small(float arr[], int n){
   float min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    
    float min2 = arr[0];
    if(min2 == min)
        min2 = arr[1];
    for(int i = 1; i < n; i++){
        if(arr[i] < min2 && arr[i] != min)
            min2 = arr[i];
    }
    printf("the smallest two: %f , %f \n", min, min2);
    //calculate and print the smallies two
}

int main(){
    char buf[100];
    int n;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    //read n

    float* d_arr = (float*) malloc(sizeof(float) * n);
    if(d_arr == NULL)
        exit(1);
    for(int i = 0; i < n; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%f", d_arr + i);
    }
 
    //print the value
    print2small(d_arr, n);
    free(d_arr);
    //deallocate
}
