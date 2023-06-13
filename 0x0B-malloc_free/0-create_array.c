#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: array
 *
 * Returns: NULL if size = 0
 * 	    pointer to array
 * 	    NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char*)malloc(size * sizeof(char));
	unsigned int i;

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
