#include "../search_algos.h"
#include <stdlib.h>
#include <math.h>

/**
 * create_skiplist - Creates a skip list from an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the created skip list, or NULL on failure
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head = NULL, *node, *prev;
	size_t i, express_interval;

	if (array == NULL || size == 0)
		return (NULL);

	express_interval = sqrt(size);
	for (i = 0; i < size; i++)
	{
		node = malloc(sizeof(skiplist_t));
		if (node == NULL)
		{
			free_skiplist(head);
			return (NULL);
		}
		node->n = array[i];
		node->index = i;
		node->next = NULL;
		node->express = NULL;
		if (i % express_interval == 0 && i != 0)
			prev->express = node;
		if (head == NULL)
			head = node;
		else
			prev->next = node;
		prev = node;
	}

	return (head);
}

