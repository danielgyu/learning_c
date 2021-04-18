#include <stdio.h>


int main(void)
{
	typedef struct name {
		char* lastname;
		char* firstname;
	} name_t;

	char firstname[] = "Lulu";
	char lastname[] = "Lee";

	name_t name;
	name_t clone;

	name.lastname = lastname;
	name.firstname = firstname;

	clone = name;
	
	printf("name add: %p\n", (void*)&name);
	printf("clone add: %p\n", (void*)clone);
}
