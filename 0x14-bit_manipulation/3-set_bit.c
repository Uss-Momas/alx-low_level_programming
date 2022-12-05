#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: the pointer to the bits
  * @index: the index
  * Return: 1 if worked, or -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	if (index > 32)
		return (-1);
	bitmask = 1 << index;
	*n = *n | bitmask;
	return (1);
}
