/*
    JTSK-320111
    assignment2.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>
void triple(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 3;
    }
    //triple every element
}

int main(){
    int arr[] = { 3, 2, 9, 3, 7, 12};
    int size = 6;
    //before the triple
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    triple(arr, size); //triple and print the result
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


}
