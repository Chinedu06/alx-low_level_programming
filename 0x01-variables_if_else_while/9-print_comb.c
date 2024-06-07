#include <stdio.h>
/**
* main - Entry point
*
* Prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');  /* Print a comma */
putchar(' ');  /* Print a space */
}
digit++;
}
putchar('\n');  /* Print a newline character */
return (0);
}
