#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *		   the Binary Search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid;
    size_t i;

    while (left <= right)
    {
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	    printf("%d", array[i]);
	    if (i < right)
		printf(", ");
	}
	printf("\n");

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
 * exponential_search - Searches for a value in a sorted array of integers
 *			using the Exponential Search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t left;
    size_t right;

    if (array == NULL)
	return (-1);

    if (array[0] == value)
	return (0);

    while (bound < size && array[bound] < value)
    {
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
    }

    left = bound / 2;
    right = bound < size ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return binary_search(array, left, right, value);
}

