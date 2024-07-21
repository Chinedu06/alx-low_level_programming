#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: The starting index of the subarray to print
 * @right: The ending index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted
 *                             array of integers using the advanced binary
 *                             search algorithm
 * @array: A pointer to the first element of the array to search in
 * @left: The starting index of the subarray to search in
 * @right: The ending index of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (advanced_binary_recursive(array, left, mid, value));
	else
		return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the advanced binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

