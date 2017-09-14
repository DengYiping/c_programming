/*
	JTSK-320111
	assignment_1_5.c
	Yiping Deng
	y.deng@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int a = 478;
    printf("a over 9 place: %9.d\n",a);
    double b = -29.7949954;
    printf("b over 11 places and with a floating point precision of 3: %9.3f\n", b);
    char c = 'j';
    printf("c is: %c\n", c);
    double d = 946.3969843;
    printf("d with precision 5: %.5f\n", d);
}
