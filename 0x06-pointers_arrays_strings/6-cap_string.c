#include "main.h"
#include <string.h>
/**
  * cap_string - capitalizes every word
  * @s: is the string
  * Return: the pointer to the string that contains all capitalized words
  */
char *cap_string(char *s)
{
	int i, j;
	char sp[] = {'\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		for (j = 0; j < 12; j++)
		{
			if (s[i] == sp[j] || s[i] == ' ')
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
				else
				{
					continue;
				}
			}
		}
	}
	return (s);
}
