/*
    JTSK-320111
    assignment_2_3.c
    Yiping Deng
    y.deng@jacobs-university.de
*/

#include <stdio.h>

int main(){
	int seconds, minutes, hours;
	char buf[100];
	//read hours
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &hours);
	//read minutes
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &minutes);
	//read seconds
	fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%d", &seconds);
	seconds = seconds + 60 * minutes + 3600 * hours;
	//print result
	printf("total seconds: %d\n", seconds);
}
