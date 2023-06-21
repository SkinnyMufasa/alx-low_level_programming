#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * on element of array.
 * @array: integer array.
 * @size: size of array.
 * @action: pointer to function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && action)
		for (k = 0; k < size; k++)
			action(array[k]);
}
