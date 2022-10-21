#include "main.h"
/**
  * print_line - print a straight line
  * @n: the size of the line
  * Return: nothing
  */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
