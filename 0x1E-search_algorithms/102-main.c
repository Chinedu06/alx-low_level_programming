#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, interpolation_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 10, interpolation_search(array, size, 10));
    printf("Found %d at index: %d\n", 20, interpolation_search(array, size, 20));

    return (EXIT_SUCCESS);
}

