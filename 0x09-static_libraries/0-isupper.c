#include "main.h"
/**
  * _isupper - verify if a char is uppercase or not
  * @c: is the character
  * Return: 1 if it's upper and 0 if it's not
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
