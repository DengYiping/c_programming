/*
    JTSK-320111
    assignment3_9.c
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    char buf[100];
    char c;
    int n;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &c);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &n);
    /* input array size and calculation type*/
    float arr[n]; //make the array
    for(int i = 0; i < n; i++){
        printf("enter grade for  %dth useri\n", i + 1);
        fgets(buf, sizeof(buf),stdin);
        sscanf(buf, "%f",arr + i); //magic trick by using array as pointer
    }
    float sum = 0.0;
    float product = 1.0;
    switch(c){
        case 's':
            //sum of input
            for(int i = 0; i < n; i++){
                sum = sum + arr[i];
            } 
            printf("the sum is %f \n", sum); 
            break;
        case 'p':
            //product of input
            for(int i = 0; i < n; i++){
                product = product * arr[i];
            }
            printf("the product is %f \n", product);
    }
}
