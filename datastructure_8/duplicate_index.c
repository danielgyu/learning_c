#include <limits.h>

#define TRUE (1)
#define FALSE (0)
#define BUCKET_SIZE (23)
int s_numbers[BUCKET_SIZE]

void init_hashtable(void)
{
	size_t i;

	for (i = 0; i < BUCKET_SIZE; ++i) {
		s_numbers[i] = INT_MIN;
	}
}

int has_value(int value)
{
	int i;
	int start_index;

	start_index = value % BUCKET_SIZE;
	if (start_index < 0) {
		start_index += BUCKET_SIZE;
	}

	i = start_index;

	do {
		if (s_numbers[i] == value) {
			return TRUE;
		} else if (s_numbers[i] == INT_MIN) {
			return FALSE;
		}

		i = (i  + 1) % BUCKET_SIZE;

	} while (i != start_index);

	return FALSE;
}

int add(int value)
{
	int i;
	int start_index;

	start_index = value % BUCKET_SIZE;
	if(start_index < 0) {
		start_index += BUCKET_SIZE;
	}

	i = start_index;
}
