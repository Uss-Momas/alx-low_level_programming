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

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	print_alphabet();
	return (0);
}
