#include "main.h"
/**
  * print_sign - verify the sign of an integer
  * @n: is the integer
  * Return: 1 if it is positive, 0 if it it's 0 or -1 if it is negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
