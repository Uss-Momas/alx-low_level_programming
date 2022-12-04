#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * binary_to_uint - convert a binary number to an unsigned int
  * @b: pointer to the string containing 0's and 1's
  * Return: the converted number, or 0 if
  * there's a char diferent from 0 and 1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNumber = 0;
	int len, i, decVal = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			convertedNumber += (1 * decVal);
		if (b[i] != '1' && b[i] != '0')
			return (0);
		decVal = decVal * 2;
	}
	return (convertedNumber);
}
