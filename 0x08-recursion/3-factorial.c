#include "main.h"

/**
 * factorial - Computes the factorial of a number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of @n.
 *         If n is lower than 0, return -1 to indicate an error.
 *         Factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n < 0) /* If n is negative, return -1 (error case) */
	{
		return (-1);
	}
	else if (n == 0 || n == 1) /* Base case: factorial of 0 or 1 is 1 */
	{
		return (1);
	}
	else /* Recursive case: compute factorial */
	{
		return (n * factorial(n - 1));
	}
}

