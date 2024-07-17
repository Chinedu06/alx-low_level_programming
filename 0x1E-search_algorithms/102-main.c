#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h" /* Assuming this header defines your search algorithms */

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));

    return 0;
}

