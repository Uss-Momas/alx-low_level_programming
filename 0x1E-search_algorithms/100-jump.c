#include "search_algos.h"
#include <math.h>

void print_middle(int i, int aux);

/**
 * print_array - method to print array
 * @condition: the start point
 * @limit: the end point
 * @array: the array
 * Return: nothing
 */
void print_array(int condition, int limit, int *array)
{
	int i;

	for (i = condition; i <= limit; i++)
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
}
/**
 * jump_search - implementation of the jump search algorithm
 * @array: pointer to the list of values
 * @size: size of the list
 * @value: the comparison value
 * Return: the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, b, i, aux;

	if (array == NULL)
		return (-1);
	idx = 0;
	b = sqrt(size);
	aux = b;
	while (array[min(b, size) - 1] < value)
	{
		printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
		if (b >= (int)size)
		{
			printf("Value found between indexes [%i] and [%i]\n", idx, b);
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
		}
		idx = b;
		b = b + sqrt(size);
		if (idx >= (int) size)
			return (-1);
	}
	if (b == aux)
		printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
	i = idx;
	while (array[idx] < value)
	{
		idx = idx + 1;
		if (idx == min(b, size))
			return (-1);
	}
	print_middle(i, aux);
	if (array[idx] == value)
	{
		if (aux + 1 <= idx)
			print_array(aux, idx, array);
		else
			print_array(idx - 1, idx, array);
		return (idx);
	}
	return (-1);
}

/**
 * print_middle - prints messages only
 * @i: first param
 * @aux: second param
 * Return: nothing
 */
void print_middle(int i, int aux)
{
	if (i > aux)
		printf("Value found between indexes [%i] and [%i]\n", aux, i);
	else
		printf("Value found between indexes [%i] and [%i]\n", i, aux);
}

/**
 * min - returns the min value between 2 values
 * @a: first value
 * @b: the 2nd value
 * Return: the minimum value
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
