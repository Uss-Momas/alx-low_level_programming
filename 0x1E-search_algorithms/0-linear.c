#include "search_algos.h"

/**
 * linear_search - linear search algorithm implementation
 * @array: pointer to the list of values
 * @size: size of the list
 * @value: the value of comparison
 * Return: the index of the first found element or -1 if element
 * doesn't exists
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array != NULL)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);
			if (array[idx] == value)
			{
				return (idx);
			}
		}
	}
	return (-1);
}
