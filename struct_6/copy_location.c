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
	/*name.lastname[0] = 'N';*/

	printf("%d\n", &name == &clone);
	printf("%d\n", (void*)name.lastname == (void*)clone.lastname);
	printf("name: %s\n", name.lastname);
	printf("clone: %s\n", clone.lastname);

}
