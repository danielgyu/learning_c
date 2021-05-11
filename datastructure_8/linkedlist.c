#include <stdio.h>

typedef struct {
	int value;
	node_t* next;
} node_t;

void print_node(const node_t* head)
{
	node_t* p;

	p = head;
	while (p != NULL) {
		printf("%d\n", p->value);
		p = p->next;
	}
}
