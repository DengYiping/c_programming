/*
	JTSK-320111
	assignment_2_1.c
	Yiping Deng
	y.deng@jacobs-university.de
*/
#include <stdio.h>
int main(){
	char buf[100]; //a buffer
	
	float f1, f2;
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%f", &f1);
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%f", &f2);
	printf("the sum of two floats: %f\n", f1 + f2);

	printf("the difference of two floats: %f\n", f1 - f2);
	printf("the square of the first float: %f\n", f1 * f1);
	
	int i1, i2;
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &i1);
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &i2);

	printf("the sum of two integer: %d\n", i1 + i2);
	printf("the product of the integer: %d\n", i1 * i2);
	
	char c1, c2;
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%c", &c1);
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%c", &c2);
	
	int sum_char = (int) c1 + (int) c2;
	int product_char = (int) c1 * (int) c2;
	
	printf("the sum is %d and the product is %d for the two chars\n", sum_char, product_char);
}
