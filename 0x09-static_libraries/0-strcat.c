#include "main.h"
/**
  * _strcat - concatenates 2 strings
  * @dest: is the destination string
  * @src: is the source string
  * Return: the char pointer
  */
char *_strcat(char *dest, char *src)
{
	char *pDest = dest, *psrc = src;

	while (*pDest != '\0')
	{
		pDest++;
	}
	while (*psrc != '\0')
	{
		*pDest = *psrc;
		pDest++;
		psrc++;
	}
	*pDest = '\0';

	return (dest);
}
