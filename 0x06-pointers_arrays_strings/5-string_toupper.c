#include "main.h"
/**
  * string_toupper - converts a lowercase char to uppercas
  * @p: is the string
  * Return: the pointer to the string;
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
