#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/*Determine the length of the string*/
	while (s[len] != '\0')
	{
		len++;
	}

	/*Print the string in reverse*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

