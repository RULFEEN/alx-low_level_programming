#include "main.h"

/**
 *_strcmp - Function that compares two strings
 *@s1: String 1
 *@s2: String 2
 *Return: the difference in ASCII value from the first indifference
 */

int _strcmp(char *s1, char *s2)
{
int res = 0, i;

for (i = 0; s1[i] != '\0'; i++)
if (s1[i] == s2[i])
continue;
else
{
res = s1[i] - s2[i];
break;
}

return (res);
}
