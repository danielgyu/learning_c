#include <stdio.h>
#include <stdlib.h>

#define LENGTH (10)

int main(void)
{
	size_t i;
	int* nums = malloc(LENGTH * sizeof(int));

	for (i = 0; i < LENGTH; ++i) {
		nums[i] = i * LENGTH;
	}

	for (i = 0; i < LENGTH; ++i) {
		printf("%d\n", nums[i]);
	}

	free(nums);
}
