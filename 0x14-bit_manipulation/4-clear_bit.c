#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: the pointer to the number
  * @index: the position to clear the bit
  * Return: 1 for success and -1 for error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	if (index > 32)
		return (-1);
	bitmask = 1 << index;
	bitmask = ~bitmask;
	*n = *n & bitmask;
	return (1);
}
