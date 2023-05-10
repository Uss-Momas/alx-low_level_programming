#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: the pointer to the list containing the values
 * @size: size of the list
 * @value: the value to be compared
 * Return: the index of the found value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	/*
	 * while ((array[high] != array[low])
	 * && (value >= array[low])&& (value <= array[high]))
	*/
	while (array[high] != array[low])
	{
		mid =  low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (mid >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)mid);
			break;
		}
		if (array[mid] < value)
		{
			printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
			high = mid - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
			return (mid);
		}
	}

	if (value == array[low])
		return (low);
	return (-1);
}
