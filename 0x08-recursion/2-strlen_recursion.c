#include<stdio.h>
/**
 * _strlen_recursion - show the length of a string privided
 *
 * *s - String provided
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = 1 + _strlen_recursion(s + 1);
	return (length);
}
