#include <stdio.h>
#include <string.h>

#define LENGTH (12)

void write(const char* filename)
{
	FILE* stream;
	char row[LENGTH] = "1, Lee, 1000";

	stream = fopen(filename, "w");

	fwrite(row, sizeof(row[0]), LENGTH, stream);
}

int main(void)
{
	write("account.txt");
}
