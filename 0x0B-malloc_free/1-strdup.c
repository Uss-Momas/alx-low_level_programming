#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _strdup - returns a pointer to a new string that
  *  is a copy of a given string as param
  * @str: the string given as parameter
  * Return: the pointer to the alocated space or NULL
  */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(*str) * strlen(str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (int) strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);

}
