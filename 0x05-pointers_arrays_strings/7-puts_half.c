#include "main.h"
#include <string.h>
/**
  * puts_half - function to print half of a string
  * @str: the string parameter
  * Return: nothing
  */
void puts_half(char *str)
{
	int len = strlen(str), mid = strlen(str) / 2, i;

	if (len % 2 != 0)
	{
		mid = mid + 1;
	}
	for (i = mid; i < (int)(strlen(str)); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
