#include "main.h"
#include <stdlib.h>
/**
  * print_last_digit - prints the last digit of a number;
  * @n: is the actual number
  * Return: the number
  */
int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar(last + '0');
	return (last);
}
