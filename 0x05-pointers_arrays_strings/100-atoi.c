#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to the string to be converted.
 *
 * Return:The converted integer.If there are no numbers in the string,return0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}

