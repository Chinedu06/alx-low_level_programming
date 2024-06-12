#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move ptr to the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}

