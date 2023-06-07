#include<stdio.h>
/**
 * puts recusion - input characters and print out the text
 *
 * Return - Always 0
 */

int _puts_recursion(char *s)
{
	int i;
	char message[] = *s;

	for (i = 0; message[i] != '\0'; i++)
	{
		putchar(message[i]);
	}
}
