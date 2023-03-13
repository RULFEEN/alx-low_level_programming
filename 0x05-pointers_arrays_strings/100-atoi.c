#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int num = 0;
int sign = 1;
int started = 0;

while (*s)
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
started = 1;
num = num * 10 + (*s - '0');
}
else if (started)
break;

s++;
}

return num * sign;
}
