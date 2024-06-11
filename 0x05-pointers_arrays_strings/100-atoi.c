#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to the string to be converted.
 *
 * Return: The converted integer. If there are no numbers in the string, return 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;
	int digit;

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
			digit = *s - '0';
			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
					return 2147483647;
				else
					return -2147483648;
			}
			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	
	return (result * sign);
}

