#include <stdio.h>
/**
* main - Entry point
*
* all single digit numbers of base 10 starting from 0, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + 48); /* 48 is the ASCII value of '0' */
}
putchar('\n');  /* Print a newline character */
return (0);
}
