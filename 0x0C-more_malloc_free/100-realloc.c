#include <stdlib.h>
#include <string.h>

/**
 *_realloc - entry point
 *@ptr: prime pointer
 *@old_size: size of ptr
 *@new_size: desired size
 *
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);

if (new_ptr != NULL)
{
memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);
}

return (new_ptr);
}
