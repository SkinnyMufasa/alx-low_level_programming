#include<stdio.h>
/**
 * _print_rev_recursion - Print string in reverse
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar();
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
