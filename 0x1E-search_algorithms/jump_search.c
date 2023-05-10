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
	int idx, step, i, aux;

	if (array != NULL)
	{
		idx = 0;
		step = sqrt(size);
		while (array[step] <= value && step < (int)size)
		{
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
			aux = idx;
			idx = step;
			step += sqrt(size);
			if (idx >= (int) size - 1)
				return (-1);
		}
		printf("Value found between indexes [%d] and [%d]\n", aux, idx);

		for (i = idx; i < step; i++)
		{
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
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
