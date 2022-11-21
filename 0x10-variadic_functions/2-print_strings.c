#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - prints strings followed by new line
  * @separator: the pointer to char that is to be printed
  * between strings
  * @n: the number of strings to be printed
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
