/*
    JTSK-320111
    assignment4_5.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int sum(int nums[], int n_size){
    int sum = 0;
    for(int i = 0; i < n_size; i++)
       sum = sum + nums[i];
    return sum; 
}
float avg(int nums[], int n_size){
    float sum = 0.0;
    for(int i = 0; i < n_size; i++)
       sum = sum + (float) nums[i];
    return sum / n_size;
}
int main(){
    int arr[8];
    int i;
    char buf[100];
    for(i = 0; i < 8; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", arr + i);
        if(arr[i] == -99)
            break;
    }
    printf("the sum is %d\n", sum(arr, i ));
    printf("the average is %f\n", avg(arr, i));
}
