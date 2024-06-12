#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, carry = 0, sum, digit1, digit2;

    /* Calculate the length of n1 and n2 */
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	/* Initialize indices for result buffer */
	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0';
	int k = size_r - 2;

	/* Add digits from right to left */
	while (i >= 0 || j >= 0 || carry)
	{
		if (k < 0)
			return (0); /* Buffer too small */

		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k--;
	}

	/* Move result to the front of the buffer if needed */
	if (k >= 0)
	{
		for (i = 0; r[k + 1]; i++, k++)
			r[i] = r[k + 1];
		r[i] = '\0';
	}
	else
	{
		return (0); /* Buffer too small */
	}

	return (r);
}

