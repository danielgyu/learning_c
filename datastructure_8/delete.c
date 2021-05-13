void remove(node_t** phead, int n)
{
	node_t** pp;
	
	pp = phead;
	while(*pp != NULL) {
		if((*pp)->value == n) {
			node_t* temp = *pp;
			*pp = (*pp)->next;
			free(temp);
			break;
		}
		pp = &(*pp)->next;
	}
}


int main(void)
{
	node_t* head = NULL;

	/* 2 -> 3 -> 5 */

	remove(&head, 2);
	remove(&head, 5);
}
