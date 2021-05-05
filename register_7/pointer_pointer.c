#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int* p;
	int* q;
	int** pp;

	num1 = 10;
	num2 = 20;

	p = &num1;
	q = &num2;

	pp = &p;
	printf("&num1: %p\n", (void*)&num1);
	printf("p: %p\n", (void*)p);
	printf("*pp %p\n", (void*)*pp);
	printf("&p: %p\n", (void*)&p);
	**pp = 1024;

	printf("p: %d\n", *p);
	printf("pp: %d\n", **pp);
}
