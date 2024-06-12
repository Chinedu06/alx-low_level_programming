#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/*Calculate the length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*Iterate through each character of src*/
	for (i = 0; src[i] != '\0'; i++)
	{
		/*Append each character to the end of dest*/
		dest[dest_len + i] = src[i];
	}

	/*Add a terminating null byte at the end of the concatenated string*/
	dest[dest_len + i] = '\0';

	return (dest);
}

