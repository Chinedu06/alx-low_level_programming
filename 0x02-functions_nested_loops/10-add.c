#include <stdio.h>

/* Function prototype for _putchar */
int _putchar(char c);

/* Function prototype for add */
int add(int num1, int num2);

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int n;

n = add(89, 9);
_putchar(n + '0');  /* Print the result using _putchar */
_putchar('\n');     /* Print a newline character */
return (0);
}

/**
* add - adds two integers
* @num1: The first integer
* @num2: The second integer
*
* Return: The sum of num1 and num2.
*/
int add(int num1, int num2)
{
return (num1 + num2);
}

/* _putchar implementation can be placed here if needed */
