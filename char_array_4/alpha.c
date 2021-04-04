#include <stdio.h>

int is_alpha(int c)
{
	return (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z');
}

int to_upper(int c)
{
	if (is_alpha(c)) {
		return c & ~0x20;
	}

	return c;
}

void string_to_upper(char* str)
{
	while (*str != '\0') {
		*str = to_upper(*str);
		++str;
	}
}

int main(void)
{
	char msg[] = "my name is lee";
	string_to_upper(msg);
	printf("%s\n", msg);	

	return 0;
}
