#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * create_list - creates a singly linked list from an array of integers
 * @array: pointer to the first element of the array to convert
 * @size: size of the array
 * Return: pointer to the head of the newly created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL;
	listint_t *new_node = NULL, *current = NULL;
	size_t i;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;
		if (!head)
		{
			head = new_node;
			current = head;
		}
		else
		{
			current->next = new_node;
			current = new_node;
		}
	}
	return (head);
}

/**
 * print_list - prints all elements in a singly linked list
 * @list: pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
}

/**
 * free_list - frees all nodes in a singly linked list
 * @list: pointer to the head of the list
 */
void free_list(listint_t *list)
{
	listint_t *tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

