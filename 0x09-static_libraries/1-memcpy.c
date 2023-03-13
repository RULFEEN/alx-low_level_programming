#include "main.h"

/**
 *_memcpy - entry point
 *@dest: first string
 *@src: source string
 *@n: integer
 *Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) =  *(src + i);

return (dest);
}
