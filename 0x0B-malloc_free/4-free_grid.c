#include<stdio.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: grid previously created
 * @height: height of grid
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return (0);
	}
	
	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	
	free(grid);
	return (0);
}