#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/*Capitalize the first character if it is a lowercase letter*/
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32; /*Convert to uppercase using ASCII values*/
	}

	/*Iterate through each character of the input string*/
	while (str[i] != '\0')
	{
		/*Check if the current character is a separator*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			/*Capitalize the next character if it is a lowercase letter*/
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32; /*Convert to uppercase using ASCII values*/
			}
		}
		i++;
	}

	return (str);
}

