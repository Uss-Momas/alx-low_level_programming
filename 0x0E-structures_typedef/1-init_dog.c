#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initializes the dog type
  * @d: the location of the dog element
  * @name: name of the dog to be initialized
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
