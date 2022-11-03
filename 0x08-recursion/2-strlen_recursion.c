#include "main.h"
/**
  * _strlen_recursion - function to recursively calculate a string length
  * @s: the pointer to the string
  * Return: the size of the string
  */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
