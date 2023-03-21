#include "dog.h"
#include <stdlib.h>

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

new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->age = age;

return (dog2);
}
