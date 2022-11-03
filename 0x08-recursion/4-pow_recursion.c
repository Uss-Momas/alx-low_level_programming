#include "main.h"
/**
  * _pow_recursion - function to calculate x power y
  * @x: the base number
  * @y: the exponent/power
  * Return: -1 if y < 0, or the result;
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1)
		return (1);
	/*Base condition*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
