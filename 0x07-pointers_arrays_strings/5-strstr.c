#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the substring to be searched
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

