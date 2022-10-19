#include "main.h"
/**
  * times_table - prints a table of 9 times
  * Return: nothing
  */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' ');
			}
			if (result / 10 == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
