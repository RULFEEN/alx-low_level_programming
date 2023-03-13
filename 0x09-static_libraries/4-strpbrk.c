#include "main.h"

/**
 *_strpbrk - entry point
 *@s: string
 *@accept: ecceptable
 *Return: a character
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}

return ('\0');
}
