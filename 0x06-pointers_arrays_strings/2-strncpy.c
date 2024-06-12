#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: the destination buffer where the string will be copied
 * @src: the source string to copy from
 * @n: the maximum number of characters to copy from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

