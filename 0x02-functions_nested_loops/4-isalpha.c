#include "main.h"
/**
  * _isalpha - verify if a char is upper
  * @c: is a integer of a character
  * Return: 1 if it is a upper char or 0 if it not
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
