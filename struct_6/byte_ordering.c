#include <stdio.h>
#include <string.h>

#define NAME_LEN (32)

int main(void)
{
	typedef struct name {
		char firstname[NAME_LEN];
		char lastname[NAME_LEN];
	} name_t;
	
	typedef struct user_info {
		unsigned int id;
		name_t name;
		unsigned short height;
		float weight;
		unsigned short age;
	} user_info_t;

	user_info_t user;

	char firstname[] = "LuLu";
	user.id = 1234;

	strncpy(user.name.firstname, firstname, NAME_LEN);

	printf("%d\n", user.id);
	printf("%s\n", user.name.firstname);

	printf("%lu\n", sizeof(user_info_t));
}
