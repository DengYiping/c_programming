/*
    JTSK-320111
    assignment_2_5.c
    Yiping Deng
    y.deng@jacobs-university.de
*/

#include <stdio.h>

int main(){
	int val;
	char buf[100];
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &val);
	printf("the value of val: %d\n", val);

	int *ptr_val = &val;
	printf("the value of the pointer: %p\n", ptr_val);

	*ptr_val = *ptr_val + 1;
	printf("the value of val: %d\n", val);
	printf("the value of the pointer: %p\n", ptr_val);
}
