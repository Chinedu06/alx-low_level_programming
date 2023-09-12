#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* This function generates a random integer, extracts its last digit,
* and then prints information about the last digit, including whether
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n % 10;
printf("Last digit of %d is %d ", n, lastDigit);
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
