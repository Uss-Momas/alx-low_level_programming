#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * argstostr - function that concatenates all the arguments of a program
  * @ac: number of arguments
  * @av: argument vector
  * Return: pointer to a new string or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, len = 0;

	ptr = "a";
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += (int) strlen(av[i]);
	}
	ptr = malloc(len);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		printf("%s",ptr);
	}
	return (ptr);
}
