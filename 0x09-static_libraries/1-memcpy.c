#include "main.h"
/**
  * _memcpy - copies a characters from a source to a destiny area
  * @dest: the pointer to the array that will have new data
  * @src: the pointer to the array source containing the data to be copied
  * @n: the number of bytes of the src data to be copied
  * Return: the pointer to the location of the block memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
