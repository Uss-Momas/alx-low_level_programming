#include "main.h"
#include <string.h>
/**
  * _strpbrk - function that searchs any set of bytes
  * @s: the string to be scanned
  * @accept: the string containing the chars to match
  * Return: returns a pointer to the byte in @s
  * that matches one of the bytes in @accept or NULL if no byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return (NULL);
}
