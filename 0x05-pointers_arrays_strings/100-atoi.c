#include "main.h"
#include <limits.h>
/**
  * _atoi - converts a string to an integer
  * @s: the string value
  * Return: an integer
  */
int _atoi(char *s)
{
	int res = 0, i = 0, sign = 1, countNegatives = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			countNegatives++;
		if (s[i + 1] != '\0')
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				break;
		i++;
	}

	if (countNegatives % 2 != 0)
		sign = -1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return ((signed int)INT_MIN);
			}
			res = res * 10 + s[i] - '0';
			if (s[i + 1] != '\0')
				if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
					break;
		}
	}

	return (res * sign);
}
