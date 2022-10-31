#include "main.h"

/**
  * _strspn - function to return the length of strings that match
  * @s: the string to be analysed
  * @accept: the string containing the chars that match the @s
  * Return: the length of the strings that match
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n = 0, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
				n++;
		}
	}

	return (n);
}
