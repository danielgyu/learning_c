#include <stdio.h>

int main(void) {
	char* s_firstname;
	char* s_lastname;

	typedef struct {
		char* firstname;
		char* lastname;
	} name_dynamic_t;

	name_dynamic_t name1;
	name_dynamic_t name2;
	
	name_dynamic_t name3;
	name_dynamic_t name4;

	name1.firstname = "KG";
	name1.lastname = "Lee";

	name2.firstname = name1.firstname;
	name2.lastname = name1.lastname;

	printf("name1.lastname: %p\n", (void*)&name1.lastname);
	printf("name1.firstname: %p\n", (void*)&name1.firstname);
	printf("name2.lastname: %p\n", (void*)&name2.lastname);
	printf("name2.firstname: %p\n", (void*)&name2.firstname);

	s_firstname = "YH";
	s_lastname = "Kim";

	printf("\n");

	name3.firstname = s_firstname;
	name3.lastname = s_lastname;
	name4.firstname = name3.firstname;;
	name4.lastname = name3.lastname;

	printf("name3.firstname %s\n", name3.firstname);
	printf("name4.firstname %s\n", name4.firstname);

	s_firstname = "GG";
	printf("modified s_firstname\n");
	printf("name3.firstname %s\n", name3.firstname);
	printf("name4.firstname %s\n", name4.firstname);

	printf("modified name3\n");
	name3.firstname = "HH";
	printf("name3.firstname %s\n", name3.firstname);
	printf("name4.firstname %s\n", name4.firstname);
}
