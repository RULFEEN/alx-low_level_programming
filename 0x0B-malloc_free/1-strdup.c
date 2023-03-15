#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - function that allocates memory and initializes with 'str'
 *@str: pointer to string
 *
 *Return: pointer to string
 */

char *_strdup(char *str)
{
char *foo;
int j, i = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

foo = malloc(sizeof(char) * (i + 1));

if (foo == NULL)
return (NULL);
for (j = 0; j < i; j++)
foo[j] = str[j];

return (foo);
}
