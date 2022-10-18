#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10 times
  * Return: no return
  */
void print_alphabet_x10(void)
{
	int alpha = 'a';
	int count = 10;

	while (count < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		_putchar('\n');
		count++;
	}
}
