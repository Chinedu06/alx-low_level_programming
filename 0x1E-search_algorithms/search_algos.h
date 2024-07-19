#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/*int binary_search(int *array, size_t left, size_t right, int value);*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

#endif /* SEARCH_ALGOS_H */

