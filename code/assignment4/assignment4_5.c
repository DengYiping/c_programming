/*
    JTSK-320111
    assignment4_5.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int sum(int nums[], int n_size){
    //calculate the sum of numbers
    //input: nums: a int arrya n_size: the size of the array
    //output: the sum as int
    int sum = 0;
    for(int i = 0; i < n_size; i++)
       sum = sum + nums[i];
    return sum; 
}
float avg(int nums[], int n_size){
    //calcuate the average as floating point
    //input: nums: a int arrya  n_size: the size of the array
    //output: the average value as float
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
        //get all the input until hit -99
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", arr + i);
        if(arr[i] == -99)
            break;
    }
    printf("the sum is %d\n", sum(arr, i ));
    printf("the average is %f\n", avg(arr, i));
}
