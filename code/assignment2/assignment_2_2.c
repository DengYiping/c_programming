/*
	JTSK-320111
	assignment_2_2.c
	Yiping Deng
	y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
	char buf[100];
	int i;
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &i);	
	printf("in decimal %d, in octal %o and in hexadecimal %x\n", i, i, i);	
}
