#include "main.h"

/**
 *puts_half - prints half a string
 *
 *@str: actionable string
 *Return: void
 */

void puts_half(char *str)
{
int len = 0;
int half, i, j;

for (i = 0; str[i] != '\0'; i++)
len++;

if (len % 2 == 0)
half = len / 2;
else
half = (len / 2) + 1;

for (j = half; str[j] != '\0'; j++)
_putchar(str[j]);

_putchar('\n');
}
