#include "search_algos.h"

/**
 * binary_search - binary search algorithm implementation
 * @array: the pointer to the list of elements
 * @size: the size of the list
 * @value: the value to be compared
 * Return: the index where value is located or -1 if value is
 * not in the list
 */
int binary_search(int *array, size_t size, int value)
{
	int m, L = 0, R = size - 1, idx;

	if (array != NULL)
	{
		while (L <= R)
		{
			printf("Searching in array: ");
			for (idx = L; idx <= R; idx++)
			{
				if (idx == R)
				{
					printf("%i", array[idx]);
					break;
				}
				printf("%i, ", array[idx]);
			}
			printf("\n");
			m = (L + R) / 2;
			if (array[m] < value)
			{
				L = m + 1;
			}
			else if (array[m] > value)
			{
				R = m - 1;
			}
			else
				return (m);
		}
	}
	return (-1);
}
