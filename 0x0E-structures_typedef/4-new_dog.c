#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nd;

nd = malloc(sizeof(dog_t));
if (nd == 0)
{
return (0);
}
nd->name = name;
nd->age = age;
nd->owner = owner;

return (nd);
}
