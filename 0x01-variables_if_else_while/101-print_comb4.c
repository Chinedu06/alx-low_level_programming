#include <stdio.h>
/**
* main - Entry point
*
* Prints all possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int hundreds_digit, tens_digit, ones_digit;
hundreds_digit = 0;
while (hundreds_digit <= 7)
{
tens_digit = hundreds_digit + 1;
while (tens_digit <= 8)
{
ones_digit = tens_digit + 1;
while (ones_digit <= 9)
{
putchar(hundreds_digit + '0'); /* Print the hundreds digit */
putchar(tens_digit + '0');     /* Print the tens digit */
putchar(ones_digit + '0');     /* Print the ones digit */
if (!(hundreds_digit == 7 && tens_digit == 8 && ones_digit == 9))
{
putchar(',');  /* Print a comma */
putchar(' ');  /* Print a space */
}
ones_digit++;
}
tens_digit++;
}
hundreds_digit++;
}
putchar('\n');  /* Print a newline character */
return (0);
}
