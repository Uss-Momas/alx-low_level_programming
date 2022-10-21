#include "main.h"
/**
  * more_numbers - print numbers from 0 to 14, ten times
  * Return: nothing
  */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar ((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
