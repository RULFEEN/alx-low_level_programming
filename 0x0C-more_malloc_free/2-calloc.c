#include <stdlib.h>
#include <stdio.h>

/**
 *_calloc - malloc's calloc pseudo-code
 *@nmemb: number of elements
 *@size: size of one element in bytes
 *
 *Return: pointer to address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *foo;
unsigned int i, tsize;

tsize = nmemb * size;
if (tsize == 0)
return (NULL);

foo = malloc(tsize + 1);
if (foo == NULL)
return (NULL);

for (i = 0; i <= (tsize + 1); i++)
foo[i] = 0;

return (foo);
}
