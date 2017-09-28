/*
    JTSK-320111
    assignment3.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

double harmonic_mean(int arr[], int num){
    //calculate the harmonic mean
    double inverse_sum = 0.0;
    for(int i = 0; i < num; ++i){
        inverse_sum += 1.0 / arr[i];
    }
    return inverse_sum / num;
}
int min(int arr[], int num){
    int c_min = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] < c_min){
            c_min = arr[i];
        }
    }
    return c_min;
    // return the minimum value in a array
}
int max(int arr[], int num){
    int c_max = arr[0];
    for(int i = 1; i < num; i++){
            if(arr[i] > c_max){
                c_max = arr[i];
            }
    }
    return c_max;
    //return the maximum value in a array
}
int sum(int arr[], int num){
    int sum = 0;
    for(int i = 0; i < num; i++){
        sum += arr[i];
    }
    return sum;
    //return the sum of all the value in a array
}


int main(){
    int arr[10];
    int arr_size = 0;
    char buf[100];
    char instruction;
    for(int i = 0; i < 10; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", arr + i);
        if(arr[i] < 0)
            break;
        arr_size++;
    }
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &instruction);

    //all the instruction case
    switch(instruction){
        case 'm':
            printf("%lf\n", harmonic_mean(arr, arr_size));
            break;
        case 'h':
            printf("%d\n", max(arr, arr_size));
            break;
        case 'l':
            printf("%d\n", min(arr, arr_size));
            break;
        case 'n':
            printf("%d\n", arr_size);
            break;
        case 's':
            printf("%d\n", sum(arr, arr_size));
            break;
        default:
            break;
    }

}
