/*
    JTSK-320111
    assignment_2_4.c
    Yiping Deng
    y.deng@jacobs-university.de
*/

#include <stdio.h>

int main(){
	float celsius;
	float faheit;
	/* variable declared*/
	char buf[100];
	//get data
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%f", &celsius);
	//calculation and print
	faheit = celsius * 1.8 + 32.0;
	printf("it is %f Fahrenheit\n", faheit);
}
