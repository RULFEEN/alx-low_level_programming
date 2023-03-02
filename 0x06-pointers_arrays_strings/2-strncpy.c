#include "main.h"

/**
 *_strncpy - Copies string src into dest
 *@dest: the string that is to be mutated
 *@src: the string to be copied
 *@n: the integer determining the length of mutation
 *
 *Return: mutated string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
