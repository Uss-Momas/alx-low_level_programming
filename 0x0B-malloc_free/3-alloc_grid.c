#include "main.h"
#include <string.h>
/**
  * alloc_grid - allocates space for a 2D array
  * @width: the number of columns
  * @height: the number of lines
  * Return: the 2D pointer
  */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int *) * width);
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
