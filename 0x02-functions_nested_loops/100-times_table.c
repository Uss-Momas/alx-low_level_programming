#include "main.h"
/**
  * print_times_table - adds two numbers
  * @n: an integer number
  * Return: nothing
  */
void print_times_table(int n)
{
	int i, j, result;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result % 100) / 10) + '0');
				}
				_putchar((result % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
