#include "lists.h"
/**
 * _strlen - length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
