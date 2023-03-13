#include "main.h"

/**
 *_memset - entry point
 *@s: string
 *@b: a character
 *@n: integer
 *Return: a character
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
