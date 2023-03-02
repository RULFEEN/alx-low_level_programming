#include "main.h"

/**
 *_strcat - Function that appends second string to first string
 *@dest: string 1 that gets mutated
 *@src: string 2 with mutation
 *
 *Return: The mutated string dest
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0, i, j;

for (i = 0; dest[i] != '\0'; i++)
dlen++;

for (j = 0; src[j] != '\0'; j++)
dest[dlen + j] = src[j];
dest[dlen + j] = '\0';

return (dest);
}
