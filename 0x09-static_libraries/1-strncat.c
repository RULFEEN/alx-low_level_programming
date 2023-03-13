#include "main.h"

/**
 *_strncat - Function that appends second string up to n
 *@dest: Mutable string
 *@src: String mutation source
 *@n: integer that determines mutation length
 *Return: mutated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, i, j;

for (i = 0; dest[i] != '\0'; i++)
dlen++;

for (j = 0; j < n && src[j] != '\0'; j++)
dest[dlen + j] = src[j];
dest[dlen + j] = '\0';

return (dest);
}
