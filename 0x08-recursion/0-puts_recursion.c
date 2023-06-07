#include<stdio.h>
/**
 * puts recusion - input characters and print out the text
 *
 * Return - Always 0
 */

int _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		putchar("\n");
		return (0)
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
