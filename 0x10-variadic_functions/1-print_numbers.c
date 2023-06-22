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
	unsigned int i;

	va_start(args, n);
	if(separator == NULL)
	{
		for (i = 0; i < n; i++)
                {
                        int v = va_arg(args, int);

                        printf("%d ", v);
                }
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int v = va_arg(args, int);
			unsigned int k = n - 1;

			if (i == k)
			{
				printf("%d", v);
			}
			else
			{
				printf("%d%s ", v , separator);
			}
		}
	}
	printf("\n");
}
