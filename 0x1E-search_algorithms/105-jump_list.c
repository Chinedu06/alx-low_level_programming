#include "search_algos.h"

/**
 * jump_list -searches for value in sorted list of int using Jump search
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 * Return:pointer the first node where value is located or NULL if not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	listint_t *current = list;
	size_t i;

	if (!list)
		return (NULL);

	while (current->index < size && current->n < value)
	{
		prev = current->index;

		for (i = 0; i < step && current->next; i++)
		{
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

	current = list;
	while (current->index < prev)
		current = current->next;

	while (current && current->index <= prev + step && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}

