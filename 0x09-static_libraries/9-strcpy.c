#include "main.h"

/**
 *_strcpy - function that copies src into dest
 *
 *@dest: a string buffer
 *@src: a string of characters
 *Return: the pointer to the buffer
 */

char *_strcpy(char *dest, char *src)
{
int len = 0, dlen = 0, i, j, k;

for (i = 0; src[i] != '\0'; i++)
len++;

for (j = 0; j < len; j++)
dest[j] = src[j];

for (k = 0; dest[k] != '\0'; k++)
dlen++;
for ( ; j < dlen; j++)
dest[j] = '\0';

return (dest);
}
