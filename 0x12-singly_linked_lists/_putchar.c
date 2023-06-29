#include "unistd.h"
/**
 * _putchar - Prints a single character
 * @c: Character to be printed
 *
 * Return: Sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
