/*
	JTSK-320111
	assignment_2_1.c
	Yiping Deng
	y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
	float celsius;
	float faheit;
	char buf[100];
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%f", &celsius);
	
	faheit = celsius * 1.8 + 32.0;
	printf("it is %f Fahrenheit\n", faheit);
}

