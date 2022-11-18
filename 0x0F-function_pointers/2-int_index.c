#include <stddef.h>
/**
  * int_index - function that returns a index of a number
  * @array: the array to search
  * @size: the size of the array
  * @cmp: the pointer to the function that compares values
  * Return: the index of the first element for which the cmp
  * function does not return 0
  * if no element return -1
  * if size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
