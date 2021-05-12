void insert_sorted(node_t** phead, int n)
{
	node_t** pp;
	node_t* new_node;

	new_node = malloc(sizeof(node_t));
	new_node->value = n;

	while(*pp != NULL) {
		if((*pp)->value >= n) {
			break;
		}
		pp = &(*pp)->next;
	}
	new_node->next = *pp;
	*pp = new_node;
}

int main(void)
{
	node_t* head = NULL;

	insert_sorted(&head, 3);
	insert_sorted(&head, 5);
	insert_sorted(&head, 2);
	insert_sorted(&head, 0);

	head = NULL;
}
