#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is not
 *         present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t i;
	size_t sqrt_size;

	if (array == NULL || size == 0)
		return (-1);

	/* Approximate the square root of size */
	sqrt_size = 1;
	while (sqrt_size * sqrt_size < size)
		sqrt_size++;

	step = sqrt_size;
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (prev + step >= size || array[prev + step] >= value)
			break;
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev,
	       (prev + step < size) ? prev + step : size - 1);

	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

