#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start from
 */

void print_to_98(int n)
{
int i;

if (n == 98)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
return;
}

if (n > 98)
{

for (i = n; i >= 98; i--)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}

}
else
{

for (i = n; i <= 98; i++)
{
_putchar(i + '0');

if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}

_putchar('\n');
return;
}
