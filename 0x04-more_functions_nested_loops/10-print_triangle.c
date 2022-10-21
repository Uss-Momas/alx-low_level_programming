#include "main.h"
/**
  * print_triangle - print a triangle
  * @size: the size of the triangle
  * Return: nothing
  */
void print_triangle(int size)
{
	int i = 0, j, sz = size, k;

	if (size <= 0)
		_putchar('\n');

	for (; i < size; i++)
	{
		sz = sz - 1;

		for (k = 0; k < sz ; k++)
			_putchar(' ');

		j = 0;
		for (; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
