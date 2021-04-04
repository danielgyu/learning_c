#include <stdio.h>

#define DEST_SIZE 11

char* strcat(char* dest, const char* src)
{
	while (*dest != '\0' || *src != '\0') {
		printf("dest: %c, src: %c\n", *dest, *src);
		if (*dest == '\0') {
			*dest = *src++;
		}
		dest++;
	}

	return dest;
}

int main(void)
{
	const char* src = "POCU";
	char dest[DEST_SIZE] = "Hello ";
	size_t i;

	strcat(dest, src);

	for (i = 0; i < DEST_SIZE; i++) {
		printf("%c", dest[i]);
	}

	return 0;
}
