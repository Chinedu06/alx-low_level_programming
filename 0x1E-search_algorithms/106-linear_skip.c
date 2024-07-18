#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer on the first node where value is located, or NULL if
 *         value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *curr;

	if (!list)
		return (NULL);

	prev = list;
	curr = list->express;
	while (curr)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n >= value)
			break;
		prev = curr;
		curr = curr->express;
	}

	if (!curr)
	{
		curr = prev;
		while (curr->next)
			curr = curr->next;
	}

	printf("Valuefoundbetweenindexes [%lu]and[%lu]\n", prev->index, curr->index);
	curr = prev;
	while (curr != NULL && curr->index <= prev->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}

	return (NULL);
}

