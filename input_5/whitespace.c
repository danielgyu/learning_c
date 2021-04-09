#include <stdio.h>
#include <ctype.h>

void print_whitespace(void)
{
	int c;
	size_t num_whitespace = 0u;
	size_t num_newline = 0u;

	c = getchar();
	while (c != EOF) {
		if (isspace(c)) {
			++num_whitespace;

			if (c == '\n') {
				++num_newline;
			}
		}

		c = getchar();
	}
	printf("num of whitespace: %5lu\n", num_whitespace);
	printf("num of newlines: %5lu\n", num_newline);
	
}

int main(void)
{
	print_whitespace();

	return 0;
}
