#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray being searched
 * @array: Pointer to the first element of the array
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 */
void print_subarray(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Recursive function to perform advanced binary search
 * @array: Pointer to the first element of the array
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (-1);

    print_subarray(array, left, right);

    mid = left + (right - left) / 2;

    if (array[mid] == value && (mid == left || array[mid - 1] != value))
        return (mid);
    if (array[mid] >= value)
        return (advanced_binary_recursive(array, left, mid, value));
    return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (advanced_binary_recursive(array, 0, size - 1, value));
}

