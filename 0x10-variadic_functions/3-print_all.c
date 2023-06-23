#include "variadic_functions.h"
/**
 * print_all - Prints all arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(arg, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
