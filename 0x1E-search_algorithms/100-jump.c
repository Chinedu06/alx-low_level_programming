#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, i;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (prev + step >= size)
            break;
        prev += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

    for (i = prev - step + 1; i <= prev && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

