#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a declaration for a structure "dog"
 *@name: dog's name
 *@age: dog's age as a float
 *@owner: owner of dog
 *
 *Description: Initializes dog with name, age and owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
