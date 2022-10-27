#include "main.h"
#include  <string.h>
/**
  * _strncat - concatenates 2 strings
  * @dest: the final string with the new modifications
  * @src: the other string we want to concatenate
  * @n: the maximum number of characters of @src to append to the @dest
  * Return: the dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	/*p is pointing to the end of the dest string*/
	char *p = dest + strlen(dest);

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
