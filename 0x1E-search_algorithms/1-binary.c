#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @array: The array to be printed
 * @left: The starting index of the subarray to be printed
 * @right: The ending index of the subarray to be printed
 *
 * Description: This function prints the elements of the array from the
 * starting index 'left' to the ending index 'right'.
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
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if array is NULL
 *         or value is not present in array
 *
 * Description: This function performs a binary search on a sorted array
 * of integers to find the index of a given value. It prints the array being
 * searched at each step of the algorithm.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left, right, mid;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        print_array(array, left, right);
        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

