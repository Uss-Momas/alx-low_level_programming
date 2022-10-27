#include "main.h"
/**
  * leet - function that encodes letters
  * @s: is the string
  * Return: the pointer to the string
  */
char *leet(char *s)
{
	int i = 0, j;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
