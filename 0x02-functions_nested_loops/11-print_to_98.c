#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - adds two numbers
  * @n: an integer number
  * Return: nothing
  */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		i = n;
		while (i >= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			i--;
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
