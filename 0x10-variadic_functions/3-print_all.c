#include "variadic_functions.h"
/**
  * print_all - function that prints anything
  * @format: the list containing the types of arguments
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0, controller = 0;
	const char args[] = "cifs", *str;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (args[j] != '\0')
		{
			if (args[j] == format[i] && controller == 1)
			{
				printf(", ");
				break;
			}
			j++;
		}
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), controller = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), controller = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), controller = 1;
				break;
			case 's':
				str = va_arg(list, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				controller = 1;
				break;
		}
		i++;
	}
	printf("\n"), va_end(list);
}
