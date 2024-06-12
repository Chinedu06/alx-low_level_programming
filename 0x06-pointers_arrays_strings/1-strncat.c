#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string to which the source string will be appended
 * @src: the source string to be appended to the destination string
 * @n: the maximum number of bytes to be appended from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*Find the end of the destination string*/
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/*Append at most n bytes from the source string to the destination string*/
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/*Add the terminating null byte*/
	dest[i] = '\0';

	return (dest);
}

