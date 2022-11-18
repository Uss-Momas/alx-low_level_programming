#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - fun that executes a function given as parameter
  * @array: the array to iterate
  * @size: the size of the array
  * @action: pointer to the function that need to use
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < (int) size; i++)
		{
			(*action)(array[i]);
		}
}
