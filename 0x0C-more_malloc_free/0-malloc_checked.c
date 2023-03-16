#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - allocates memory and checks fail
 *@b: size_t
 *
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *foo;
foo = malloc(b);
if (foo == NULL)
exit(98);
return (foo);
}
