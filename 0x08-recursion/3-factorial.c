#include "main.h"
/**
  * factorial - function to calculate the factorial of a given number
  * @n: the given number
  * Return: the result, -1 if n < 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
