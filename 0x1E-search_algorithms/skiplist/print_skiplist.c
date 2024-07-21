#include "../search_algos.h"
#include <stdio.h>

/**
 * print_skiplist - Prints a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node = list;
	const skiplist_t *express = list;

	printf("List :\n");
	while (node)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	printf("\nExpress lane :\n");
	while (express)
	{
		printf("Index[%lu] = [%d]\n", express->index, express->n);
		express = express->express;
	}
	printf("\n");
}

