#include "main.h"
/**
  * _puts_recursion - function to print a string in a recursive way
  * @s: the pointer to the string
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
