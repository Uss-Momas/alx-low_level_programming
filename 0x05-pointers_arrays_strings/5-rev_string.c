#include "main.h"
#include <string.h>
/**
  * rev_string - reverses a string
  * @s: is the string
  * Return: nothing
  */
void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2, i;
	char tmp;

	for (i = 0; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
