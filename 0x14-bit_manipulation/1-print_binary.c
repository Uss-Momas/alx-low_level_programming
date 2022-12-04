#include "main.h"
#include <stdio.h>
/**
  * print_binary - prints a decimal number in a binary form
  * @n: the decimal number
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int number, bitmask;
	int nBits = 0;

	number = n;
	if (number == 0)
	{
		_putchar ('0');
		return;
	}

	while (number > 0)
	{
		number = number >> 1;
		nBits++;
	}
	number = n;
	bitmask = _pow(2, nBits - 1);
	while (bitmask > 0)
	{
		if ((number & bitmask) == bitmask)
			_putchar('1');
		else if ((number & bitmask) == 0)
			_putchar('0');
		bitmask = bitmask >> 1;
	}
}

/**
  * _pow - calculates the power a base elevated by an exponent
  * @base: the base number
  * @n: the exponent number
  * Return: the result of the calculation
  */

unsigned long int _pow(int base, int n)
{
	unsigned long int result = 1;
	int i;

	for (i = 0; i < n; i++)
		result *= base;

	return (result);
}
