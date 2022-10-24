#include "main.h"
#include <string.h>
/**
  * puts2 - prints every other char of a string
  * @str: the string itself
  * Return: nothing
  */
void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

