#include "main.h"
/**
  * print_alphabet - fun to print a-z
  * Return: nothing
  */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
