#include <stdlib.h>
#include "main.h"

/**
 *free_grid - free gread
 *@grid: pointer 
 *@height: hight 
 *Return: 0
 **/

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
	    return;
	}
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	grid = NULL;
}

