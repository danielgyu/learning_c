#include <stdio.h>
#include <assert.h>


void insert_at(size_t index, int n);
enum { MAX_NUMS  = 8};
enum { INVALID_INDEX = -1 };
int s_nums[MAX_NUMS];
size_t s_num_count = 0;

int main(void)
{
	insert_at(0, 1);
	insert_at(0, 2);
	insert_at(0, 3);
	insert_at(0, 4);
	insert_at(0, 5);
	insert_at(0, 6);
	insert_at(0, 7);
	insert_at(7, 8);
}

void insert_at(size_t index, int n)
{
	size_t i;
	
	assert(index <= s_num_count);
	assert(s_num_count < MAX_NUMS);

	for (i = s_num_count; i > index; --i) {
		s_nums[i] = s_nums[i - 1];
	}

	s_nums[index] = n;
	++s_num_count;

	for (i = 0; i < s_num_count; ++i) {
		printf("%d ", s_nums[i]);
	}
	printf("\n");
}
