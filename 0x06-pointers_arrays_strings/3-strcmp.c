#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: the first string
  * @s2: the second string
  * Return: the diference of the ASCII decimal values of @s1 and @s2
  */
int _strcmp(char *s1, char *s2)
{
	int value;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	value = *s1 - *s2;
	return (value);
}
