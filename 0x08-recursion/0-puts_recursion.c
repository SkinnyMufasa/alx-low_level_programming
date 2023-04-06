#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *@s: string
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set 
 */
void _puts_recursion(char *s)
{
	if(*s == 0)
	{
		printf("/n");
		return;
	}
	putchar(s);
}
