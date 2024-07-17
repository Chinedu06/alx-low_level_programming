#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    int bound = 1;   /* Initialize the bound for exponential search */
    int low, high;   /* Variables to store the low and high bounds */
    int mid;         /* Variable to store the middle index */

    if (array == NULL || size == 0)
        return -1;

    /* Find the range where the value may be present */
    while (bound < (int)size && array[bound] < value) {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2; /* Double the bound */
    }

    /* Set the low and high bounds for binary search within the found range */
    low = bound / 2;
    high = (bound < (int)size - 1) ? bound : (int)size - 1;

    printf("Value found between indexes [%d] and [%d]\n", low, high);

    /* Perform binary search within the identified range */
    while (low <= high) {
        /* Print the current subarray being searched */
        printf("Searching in array: ");
        for (int i = low; i <= high; i++) {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
            else
                printf("\n");
        }

        mid = low + (high - low) / 2;

        /* Check if value is present at mid */
        if (array[mid] == value)
            return mid;
        /* If value is greater, ignore left half */
        else if (array[mid] < value)
            low = mid + 1;
        /* If value is smaller, ignore right half */
        else
            high = mid - 1;
    }

    /* If value is not found */
    return -1;
}

