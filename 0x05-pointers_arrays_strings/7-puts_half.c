#include "main.h"
#include <string.h>
/**
  * puts_half - function to print half of a string
  * @str: the string parameter
  * Return: nothing
  */
void puts_half(char *str)
{
	int mid = strlen(str) / 2, i;

	if (strlen(str) % 2 != 0)
		mid = (strlen(str) - 1) / 2;
	for (i = mid; i < (int)(strlen(str)); i++)
		_putchar(str[i]);
	_putchar('\n');
}
