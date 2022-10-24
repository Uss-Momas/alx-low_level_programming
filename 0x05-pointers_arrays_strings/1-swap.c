#include "main.h"

/**
  * swap_int - swap the values of 2 integers
  * @a: first integer value
  * @b: second integer value
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
