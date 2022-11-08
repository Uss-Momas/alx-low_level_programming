#include "main.h"
/**
  * str_concat - function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: the pointer to the location
  *         that contains the  two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j = 0;

	ptr = malloc(sizeof(*s1) * strlen(s1) + sizeof(*s2) * strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (int)(strlen(s1) + strlen(s2)); i++)
	{
		if (s1[i] == '\0')
		{
			while (s2[j] != '\0')
			{
				ptr[i] = s2[j];
				j++;
				i++;
			}
		}
		else
			ptr[i] = s1[i];
	}
	return (ptr);
}
