#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the modified string
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_codes[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	/*Iterate through each character of the input string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		/*Iterate through the leet_chars array to find a match*/
		for (j = 0; j < 10; j++)
		{
			/*If the current character matches a character in leet_chars*/
			/*Replace it with the corresponding leet code*/
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_codes[j];
				break; /*Break the inner loop once a match is found*/
			}
		}
	}

	return (str);
}

