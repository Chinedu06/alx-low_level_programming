#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string to which the source string will be appended
 * @src: the source string to be appended to the destination string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/*Find the end of the destination string*/
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/*Append the source string to the destination string*/
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/*Add the terminating null byte*/
	dest[i] = '\0';

	return (dest);
}

