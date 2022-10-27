#include "main.h"
/**
  * _strncpy - copies a source string to a destination string
  * @dest: is the destiny of the new content
  * @src: is the string to be copied
  * @n: is the number of chars to be copied
  * Return: the dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}

	while (i < n)
	{
		*p = '\0';
		p++;
	}

	return (dest);
}
