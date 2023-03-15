#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of character 'c'
 *@size: number of characters
 *@c: initializer
 *
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *foo;
if (size == 0)
return (NULL);
foo = malloc(sizeof(char) * size);

if (foo == NULL)
return (NULL);
for (i = 0; i < size; i++)
foo[i] = c;
return (foo);
}
