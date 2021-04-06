#include <stdio.h>

#define TRUE (1)

int main(void)
{
	int c;
	while (TRUE) {
		c = getchar();
		putchar(c);
	}
}
