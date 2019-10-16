#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: The grid
* @height: The height
* Return: 0
**/
void free_grid(int **grid, int height)
{
	int c;

	for (c = height - 1; c >= 0; c--)
	{
		free(grid[c]);
	}

	free(grid);

	grid = NULL;
}
