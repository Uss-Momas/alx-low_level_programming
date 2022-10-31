#include "main.h"
/**
  * _memset - fill the memory block with a constant byte
  * @s: the pointer to the block of memory to be set
  * @b: the character to be used to set the memory block
  * @n: the number of bytes to use
  * Return: the pointer to the location of the memory block
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

