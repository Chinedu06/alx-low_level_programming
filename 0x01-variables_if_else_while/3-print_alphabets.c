#include <stdio.h>
/**
* main - Entry point
*
* Prints the alphabet in lowercase, and then in uppercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');  /* Print a newline character */
return (0);
}
