#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int number1 = 0;
	int number2 = 0;

	while (number1 <= 9)
	{
		number2 = number1 + 1;
		while (number2 <= 9)
		{
			putchar(number1 + '0');
			putchar(number2 + '0');
			if (number1 == 8 && number2 == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			number2++;
		}
		number1++;
	}
	return (0);
}
