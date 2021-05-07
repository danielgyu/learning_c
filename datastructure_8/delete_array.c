#include <stdio.h>
#include <assert.h>

enum { MAX_NUMS = 8 };
enum { INVALID_INDEX = -1 };
size_t s_nums_count = MAX_NUMS;
int s_nums[] = { 7, 6, 5, 4, 3, 2, 1, 8 };

void remove_at(size_t index);

int main(void)
{
	size_t j;
	remove_at(7);
	remove_at(0);
	remove_at(0);

	
	for (j = 0; j < MAX_NUMS; ++j) {
		printf("%d ", s_nums[j]);
	}

	return 0;
}

void remove_at(size_t index)
{
	size_t i;

	assert(index < s_nums_count);

	--s_nums_count;
	for (i = index; i < s_nums_count; ++i) {
		s_nums[i] = s_nums[i + 1];
	}
}
