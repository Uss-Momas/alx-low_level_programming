#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates new dog
  * @name: the name of the new dog
  * @age: the age of the dog
  * @owner: the name of the ownerof the dog
  * Return: a pointer to the type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
