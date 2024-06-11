#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[12];
	int i, sum = 0;
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_size = sizeof(charset) - 1;
	
	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = charset[rand() % charset_size];
		sum += password[i];
	}

	/*Ensure the password is null-terminated*/
	password[11] = '\0';

	printf("%s", password);

	return (0);
}

