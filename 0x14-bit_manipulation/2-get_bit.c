#include "main.h"


int numberBits(unsigned long int n);

/**
  * get_bit - gets a bit in a index
  * @n: the decimal number
  * @index: the bit position
  * Return: the value of the bit or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int result, nbits;

	nbits = numberBits(n);
	if (nbits < (int)index)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}

/**
  * numberBits - counts the total of bits of a number
  * @n: the number
  * Return: the total of bits
  */
int numberBits(unsigned long int n)
{
	unsigned long int number;
	int nBits = 0;

	number = n;
	while (number > 0)
	{
		number = number >> 1;
		nBits++;
	}
	return (nBits);
}
