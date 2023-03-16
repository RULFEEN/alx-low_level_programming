#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings with the s2[n]
 *@s1: pointer to the first string
 *@s2: pointer to second string
 *@n: value to concatenate s2
 *
 *Return: a pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2, len3;
char *foo;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2) + 1;

if (n <= len2)
len3 = len1 + n;
else
len3 = len1 + len2;

foo = malloc(len3 + 1);
if (foo == NULL)
return (NULL);
for (i = 0; i < len1; i++)
foo[i] = s1[i];
for (j = 0; j < (len3 - len1); j++)
foo[i + j] = s2[j];

return (foo);
}
