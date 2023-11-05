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
int i;
int sizen = 0;
int sizeo = 0;
dog_t *nd;
while (name[sizen] != '\0')
{
sizen++;
}
while (owner[sizeo] != '\0')
{
sizeo++;
}
nd = malloc(sizeof(dog_t));
if (nd == 0)
{
return (0);
}
nd->name = malloc(sizeof(char) * (sizen + 1));
if (nd->name == 0)
{
free(nd);
return (0);
}
nd->owner = malloc(sizeof(char) * (sizeo + 1));
if (nd->owner == 0)
{
free(nd->name);
free(nd);
return (0);
}
for (i = 0; i <= sizen; i++)
{
nd->name[i] = name[i];
}
nd->age = age;
for (i = 0; i <= sizeo; i++)
{
nd->owner[i] = owner[i];
}
return (nd);
}
