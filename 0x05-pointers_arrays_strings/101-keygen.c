#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Generates a valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	char password[100];
	int i = 0;
	int rand_char;

	srand(time(NULL));

	while (sum < (2772 - 122))
	{
		rand_char = (rand() % 94) + 33; /* generates a random printable character */
		password[i] = rand_char;
		sum += rand_char;
		i++;
	}
	password[i] = 2772 - sum; /* ensures the sum of ASCII values equals 2772 */
	password[i + 1] = '\0';

	for (int j = 0; j <= i; j++)
	{
		_putchar(password[j]);
	}
	return (0);
}

