#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloct_grid - allocate each element of the grids, initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2D array of integers, or NULL when it fails or width / height <= 0.
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **grid;

	grid = (int **) malloc(sizeof(int *) * height);
	b = 0;
	while (b < height)
	{
		grid[b] = (int *)malloc(sizeof(int) * width);
		b = b + 1;
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (b < height)
	{
		a = 0;
		while (a < width)
		{
			grid[a * height + b] = 0;
			a = a + 1;
		}
		b = b + 1;
	}
	if (width || height <= 0)
	{
		return (NULL);
	}
	return (grid);
}
