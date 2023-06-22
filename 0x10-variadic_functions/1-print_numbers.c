#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, k;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int v = va_arg(args, int);

		k = n - 1;
	        if (!separator)
                {
			printf("%d ", v);
		}
		else if (i == k)
		{
			printf("%d", v);
		}
		else
		{
			printf("%d%s ", v , separator);
		}
	}
	va_end(args);
	printf("\n");
}
