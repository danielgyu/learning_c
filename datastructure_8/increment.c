#include <stdio.h>

int main(void)
{
	size_t i;
	for (i = 100; i < 105; i++) {
		printf("%lu\n", i);
	}

	for (i = 200; i < 205; ++i) {
		printf("%lu\n", i);
	}
}
