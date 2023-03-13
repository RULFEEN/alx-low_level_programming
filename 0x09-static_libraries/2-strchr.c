#include "main.h"

/**
 *_strchr -  entry point
 *@s: string
 *@c: character
 *
 *Return: the string
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
;
if (s[i] == c)
return (s + i);
else
return ('\0');
}
