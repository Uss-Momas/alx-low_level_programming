#include "main.h"
/**
  * _isdigit - function to verify if a char is a digit or not
  * @c: the character that we want to verify
  * Return: 1 if it's a digit, otherwise return 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
