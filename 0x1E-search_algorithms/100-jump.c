#include "search_algos.h"
#include <math.h>
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

	if (array != NULL)
	{
		idx = 0;
		b = sqrt(size);
		aux = b;
		while (array[min(b, size) - 1] < value)
		{
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
			idx = b;
			b = b + sqrt(size);
			if (idx >= (int) size)
				return (-1);
		}

		printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
		while (array[idx] < value)
		{
			idx = idx + 1;
			if (idx == min(b, size))
				return (-1);
		}

		if (array[idx] == value)
		{
			if (aux + 1 <= idx)
				for (i = aux + 1; i <= idx; i++)
					printf("Value checked array[%i] = [%i]\n", i, array[i]);
			else
				for (i = idx - 1; i <= idx; i++)
					printf("Value checked array[%i] = [%i]\n", i, array[i]);
			return (idx);
		}
	}
	return (-1);
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
