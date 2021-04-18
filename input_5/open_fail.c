#include <stdio.h>
#include <string.h>
#include <errno.h>

#define LENGTH (1024)

void open_file(const char* filename)
{
	FILE* stream;
	char data[LENGTH];

	stream = fopen(filename, "r");
	if (stream == NULL) {
		fprintf(stderr, "error opening %s\n", filename);
		fprintf(stderr, "[%d] error\n", errno);
		fprintf(stderr, "%s - %s\n", filename, strerror(errno));
		perror("error while opening");
		return;
	}

	if (fgets(data, LENGTH, stream) != NULL) {
		printf("%s", data);
	}

	if (fclose(stream) != 0) {
		fprintf(stderr, "error while closing");
	}
}


int main(void)
{
	open_file("null.txt");
	return 0;
}
