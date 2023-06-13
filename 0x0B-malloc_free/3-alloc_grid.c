#include<cstlib>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;

	int** array = (int**)malloc(width * sizeof(int*));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; ++i)
	{
		array[i] = (int*)malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; ++j)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < height; ++j)
		{
			array[i][j] = 0;
		}
	}
	
	return (array);
}