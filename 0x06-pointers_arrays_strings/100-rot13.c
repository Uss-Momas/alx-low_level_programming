#include "main.h"
/**
  * rot13 - fun to implement Rotation of 13 letters
  * @s: the string
  * Return: the pointer of the string
  */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'm' && s[i] <= 'z') || (s[i] >= 'M' && s[i] <= 'Z'))
			{
				s[i] = s[i] - 13;
				break;
			}

			s[i] = s[i] + 13;
			break;
		}
		i++;
	}
	return (s);
}
