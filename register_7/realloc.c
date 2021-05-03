#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define LENGTH (100)

int main(void)
{
	void* mem1;
	void* mem2;
	void* mem3;

	mem1 = malloc(LENGTH);
	printf("mem1: %p\n", mem1);
	
	mem2 = malloc(LENGTH * 2);
	printf("mem2: %p\n", mem2);

	mem3 = realloc(mem1, LENGTH * 3);
	
	if (mem1 == NULL) {
		printf("mem1 is NULL\n");
	}
	printf("mem1; %p\n", mem1);
	printf("mem3: %p\n", mem3);
}
