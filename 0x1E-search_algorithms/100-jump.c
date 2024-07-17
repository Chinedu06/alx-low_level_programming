#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, start, end, i;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
        if (prev >= size)
            break;
    }

    start = prev - step;
    end = (prev < size) ? prev : size;
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);

    for (i = start; i < end; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

