/*
	JTSK-320111
	assignment_2_1.c
	Yiping Deng
	y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
	int seconds, minutes, hours;
	char buf[100];
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &hours);
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &minutes);
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%d", &seconds);
	seconds = seconds + 60 * minutes + 3600 * hours;
	printf("total seconds: %d\n", seconds);	
}
