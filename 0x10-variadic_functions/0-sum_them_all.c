#include "variadic_functions.h"
/**
 * sum_them_all - Adds up all its parameters
 * @n: varable for all parameters
 *
 * Return: sum off all parameters,
 * if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

    	for (i = 0; i < n; i++)
	{
        	int value = va_arg(args, int);

        	sum += value;
    	}

    	va_end(args);
	return (sum);
}
