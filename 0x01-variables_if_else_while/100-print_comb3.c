#include <stdio.h>
/**
* main - Entry point
*
* Prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int tens_digit, ones_digit;
tens_digit = 0;
while (tens_digit <= 8)
{
ones_digit = tens_digit + 1;
while (ones_digit <= 9)
{
putchar(tens_digit + '0'); /* Print the tens digit */
putchar(ones_digit + '0'); /* Print the ones digit */
if (tens_digit != 8 || ones_digit != 9)
{
putchar(',');  /* Print a comma */
putchar(' ');  /* Print a space */
}
ones_digit++;
}
tens_digit++;
}
putchar('\n');  /* Print a newline character */
return (0);
}
