/*
    JTSK-320111
    assignment4_6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int posmin(int v[], int n){
    //implement the algorithm
    //input: a int array and a int represent the size of array
    //output: the index of the smallest element as int
    int min = v[0];
    int idx = 0;
    for(int i = 1; i < n; i++){
        //skip the first one
        if(v[i] < min){
            min = v[i];
            idx = i;
        }
    }
    return idx;
}
int main(){
    int n;
    char buf[100];
    //input size
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        //fill in the array
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", arr + i);
    }
    for(int i = 0; i < n; i++){
        //print out the array
        printf("%d ", arr[i]);
    }
    printf("\n");
    //calculate the result
    printf("position of minimum %d\n", posmin(arr, n));
}
