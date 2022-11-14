#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: this structure defines how a dog type could be
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
