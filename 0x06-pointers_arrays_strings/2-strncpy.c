#include "main.h"
/**
  * _strncpy - copies a source string to a destination string
  * @dest: is the destiny of the new content
  * @src: is the string to be copied
  * @n: is the number of chars to be copied
  * Return: the pointer to the dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
