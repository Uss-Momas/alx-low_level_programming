#include "main.h"
/**
  * reverse_array - function to reverse an array
  * @a: the array
  * @n: the length of the array
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int i, middle = n / 2, tmp;

	for (i = 0; i < middle; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1]; /* n - i - 1= n - (i + 1)*/
		a[n - i - 1] = tmp;
	}
}
