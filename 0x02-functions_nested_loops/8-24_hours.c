#include "main.h"
/**
  * jack_bauer - prints every min of a day
  * Return: nothing
  */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			int first = i / 10;
			int second = i % 10;
			int third = j / 10;
			int fourth = j % 10;

			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(':');
			_putchar(third + '0');
			_putchar(fourth + '0');
			_putchar('\n');
		}
	}
}
