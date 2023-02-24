#include <stdio.h>

/**
 *main - function that returns the largest prime factor
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
long int num = 612852475143;
int factor = 2;
int largest_factor = 0;

while (num != 1)
{
if (num % factor == 0)
{
largest_factor = factor;
num = num / factor;
}
else
{
factor++;
}
}

printf("%d\n", largest_factor);

return (0);
}
