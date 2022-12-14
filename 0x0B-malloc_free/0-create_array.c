#include "main.h"
/**
  * create_array - creates an array of characters and initialize it with a char
  * @size: the size of the array
  * @c: the character to initialize our array
  * Return: a pointer to the address of the first char or NULL
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
