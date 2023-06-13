#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: stored character
 *
 * Returns: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (array);
}
