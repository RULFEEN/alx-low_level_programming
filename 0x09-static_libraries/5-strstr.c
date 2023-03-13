#include "main.h"

/**
 *_strstr - entry point
 *@haystack: char array
 *@needle: char
 *Return: the needle in the haystack
 */

char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return ('\0');
}
