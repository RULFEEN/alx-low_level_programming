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

dog2->name = name;
dog2->age = age;
dog2->owner = owner;

return (dog2);
}
