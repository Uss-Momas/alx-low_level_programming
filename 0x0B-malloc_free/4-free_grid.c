#include "main.h"
/**
  * free_grid - frees the mem alocated to a 2D array
  * @grid: the 2D array
  * @height: the number of lines
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
