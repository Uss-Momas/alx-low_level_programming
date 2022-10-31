#include "main.h"
#include <string.h>
/**
  * _strchr - function to locates a character in a string
  * @s: is the pointer tto the memory block containing an array of characters
  * @c: is the character that we wanna locate in @s
  * Return: the pointer to the first occurence of the char @c
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c && s[i] != '\0')
	{
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
