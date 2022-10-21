#include "main.h"
/**
  * print_diagonal - print a diagonal line
  * @n: the size of the line
  * Return: nothing
  */
void print_diagonal(int n)
{
	int i = 0, j;


	if (n <= 0)
		_putchar('\n');

	for (; i < n; i++)
	{
		j = 0;
		for (; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
