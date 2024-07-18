#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>  /* Include for size_t */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t left, size_t right, int value); /* Keep this declaration */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */

