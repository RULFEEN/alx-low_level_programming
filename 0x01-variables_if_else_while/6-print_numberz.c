#include <stdio.h>

/**
 *main - prints single digits
 *
 *Return: 0
 */

int main(void)
{
int i;

i = 0;

while (i < 10)
{
putchar('0' + i);
i++;
}

putchar('\n');

return (0);
}
