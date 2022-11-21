#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers
  * @separator: the string to be printed between the numbers
  * @n: number of the integers passed as arguments
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d %s", va_arg(ls, int), separator);
			else
				printf("%d", va_arg(ls, int));
		}
		printf("\n");
	}
}
