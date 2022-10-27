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

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	return (dest);
}
