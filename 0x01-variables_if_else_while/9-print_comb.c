#include <stdio.h>
/**
  * main - entry
  * Return: 0
  */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	return (0);
}
