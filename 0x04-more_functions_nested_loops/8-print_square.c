#include "main.h"
/**
  * print_square - print a square
  * @size: the size of the square
  * Return: nothing
  */
void print_square(int size)
{
	int i = 0, j;


	if (size <= 0)
		_putchar('\n');

	for (; i < size; i++)
	{
		j = 0;
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
