#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - function to print the sum of the diagonals
  * @a: the pointer to the location of the array
  * @size: the size of the 2D array
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int i, j = 0, primaryDiag = 0, secondaryDiag = 0;

	for (i = 0; i < size; i++)
	{
		primaryDiag += *a[i][j];
		j++;
	}
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		secondaryDiag += *a[i][j];
		j--;
	}
	printf("%d, %d", primaryDiag, secundaryDiag);
}
