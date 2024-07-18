#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @left: Left index of the subarray to search in.
 * @right: Right index of the subarray to search in.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not present.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }
        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located, or -1 if not present.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t min_bound;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min_bound = bound < size ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min_bound);
    return (binary_search(array, bound / 2, min_bound, value));
}

