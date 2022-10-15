#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int number = 0;
	int letter = 'a';

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		if (letter == 'f')
			putchar('\n');
		letter++;
	}
	return (0);
}
