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

void destroy(node_t* head)
{
	node_t* p = head;

	while (p != NULL) {
		node_t* next = p->next;
		free(p);
		p = next;
	}
}

void insert_front(node_t** phead, int n)
{
	node_t* new_node;

	new_node = malloc(sizeof(node_t));
	new_node->value = n;
	new_node->next = *phead;	
	*phead = new_node;
}

int main(void)
{
	node_t* head = NULL;

	insert_front(&head, 3);
	insert_front(&head, 5);
	insert_front(&head, 2);
	insert_front(&head, 0);

	destroy(head);
	head = NULL;
}
