#include <stdio.h>
#include <string.h>

#define LENGTH (1024)

void append(const char* filename)
{
	FILE* stream;
	char data[LENGTH];

	stream = fopen(filename, "a");

	if (fgets(data, LENGTH, stdin) != NULL) {
		fwrite(data, strlen(data), 1, stream);
	}

	fclose(stream);
}

int main(void)
{
	append("hello.txt");
	return 0;
}
