#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 algorithm
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;
	char rot13_table[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			for (i = 0; i < 52; i++)
			{
				if (*s == rot13_table[i])
				{
					*s = rot13_table[i];
					break;
				}
			}
		}
		s++;
	}

	return (ptr);
}

