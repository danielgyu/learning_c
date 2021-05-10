#include <stdio.h>
#include <assert.h>

enum { MAX_NUMS = 8 };

int s_nums[MAX_NUMS];
int s_nums_count = 0;

void print_array(void)
{
	size_t i;
	for (i = 0; i < MAX_NUMS; ++i) {
		printf("%d ", s_nums[i]);
	}
}

void push(int n)
{
	assert(s_nums_count < MAX_NUMS);
	s_nums[s_nums_count++] = n;
}

void pop(void)
{
	assert(s_nums_count > 0);
	s_nums[s_nums_count--] = 0;
}

int main(void)
{
	push(88);
	push(44);
	push(22);
	
	print_array();
	printf("\n");

	pop();
	pop();

	print_array();

	return 0;
}
