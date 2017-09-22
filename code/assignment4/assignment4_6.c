/*
    JTSK-320111
    assignment4_6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
int posmin(int v[], int n){
    int min = v[0];
    int idx = 0;
    for(int i = 1; i < n; i++){
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
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", arr + i);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("position of minimum %d\n", posmin(arr, n));
}
