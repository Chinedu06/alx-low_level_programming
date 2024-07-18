#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search-searchesforavalueinasortedarrayofintegersusingJumpsearchalgo
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return:Thefirstindexwherevalueislocated,or-1ifvalueisnotpresentorarrayisNULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;
	size_t sqrt_size;

	if (array == NULL || size == 0)
		return (-1);

	/* Approximate the square root of size */
	sqrt_size = 1;
	while (sqrt_size * sqrt_size < size)
		sqrt_size++;

	step = sqrt_size;
	prev = 0;

	while (prev + step < size && array[prev + step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

