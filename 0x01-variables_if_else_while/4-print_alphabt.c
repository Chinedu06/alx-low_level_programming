#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');  /* Print a newline character */
return (0);
}
