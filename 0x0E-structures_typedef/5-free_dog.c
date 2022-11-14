#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees the memory ocuppied by a dog_t
  * @d: the dog_t pointer
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
