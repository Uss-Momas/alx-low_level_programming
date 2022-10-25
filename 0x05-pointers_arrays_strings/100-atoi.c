#include "main.h"
/**
  * _atoi - converts a string to an integer
  * @s: the string value
  * Return: an integer
  */
int _atoi(char *s)
{
	int res = 0, i, sign = 1, countNegatives = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			countNegatives++;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';
			if (s[i + 1] != '\0')
				if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
					break;
		}
	}

	if (countNegatives % 2 != 0)
		sign = -1;
	return (res * sign);
}
