#include <stdio.h>

#define MSG_LENGTH (22)

char* tokenize(char msg[], const char delims[], size_t num)
{
	size_t i;

	while (*msg != '\0') {
		for (i = 0; i < num; i++) {
			if (*msg == delims[i]) {
					*msg = '\0';
			}
		}
		++msg;
	}
	return msg;
}

int main(void)
{
	char test[] = "a\0b";
	char msg[] = "Hello, there. Hi. Bye";
	const char delims[] = "., ";
	size_t num = 3;
	size_t i;

	tokenize(msg, delims, num);
	for (i = 0; i < MSG_LENGTH; i++) {
		printf("%c", msg[i]);
	}

	printf("\n");

	for (i = 0; i < 3; i++) {
		printf("%c", test[i]);
	}

	return 0;
}
