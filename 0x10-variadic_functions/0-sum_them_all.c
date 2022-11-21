#include "variadic_functions.h"
/**
  * sum_them_all - variadic function that sums n numbers
  * @n: the number of the arguments
  * Return: the sum of all numbers or 0 if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
