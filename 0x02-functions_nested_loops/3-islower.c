#include "main.h"
/**
  * _islower - verify if a char is lowercase
  * @c: is a integer of a character
  * Return: 1 if it is a lower char or 0 if it not
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
