#include <stdio.h>
/**
* main - Entry point
*
* Prints all the numbers of base 16 in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');  /* Print a newline character */
return (0);
}
