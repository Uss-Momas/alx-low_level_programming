#include "main.h"
/**
  * flip_bits - counts the number of bits to be flipped to n and m be equal
  * @n: the first number
  * @m: the second number
  * Return: the number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	count = 0;
	result = n ^ m;

	while (result > 0)
	{
		result = result & (result - 1);
		count++;
	}
	return (count);
}
