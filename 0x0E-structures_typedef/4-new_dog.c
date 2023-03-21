#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - creates new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 *Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog2;

dog2 = malloc(sizeof(dog_t));
if (dog2 == NULL)
return (NULL);

dog2->name = strdup(name);
if (dog2->name == NULL)
{
free(dog2);
return (NULL);
}

dog2->owner = strdup(owner);
if (dog2->owner == NULL)
{
free(dog2->name);
free(dog2);
return (NULL);
}

dog2->age = age;

return (dog2);
}
