#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to be printed.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

