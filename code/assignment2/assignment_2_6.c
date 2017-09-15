/*
    JTSK-320111
    assignment_2_6.c
    Yiping Deng
    y.deng@jacobs-university.de
*/

#include <stdio.h>

int main(){
	float a, b;
	char buf[100];
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%f", &a);
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%f", &b);

	float *ptr1 = &a;
	float *ptr2 = &a;
	float *ptr3 = &b;

	printf("address ptr1: %p\n", ptr1);
	printf("address ptr2: %p\n", ptr2);
	printf("address ptr3: %p\n", ptr3);
}
