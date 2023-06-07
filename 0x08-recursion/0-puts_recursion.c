#include<stdio.h>
/**
 * puts recusion - input characters and print out the text
 *
 * Return - Always 0
 */

int _puts_recursion(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		putchar(*s);
	}
}
