#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * str_concat - concatenates two strings
 * @*s1: pointer to the first string
 * @*s2: pointer to the second string
 *
 * Return: point to a newly allocated space in memory which contains the concatenated two strings
 */
char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2) + 1;

	char *res = (char *)malloc(len * sizeof(char));
	char *p = res;

	while(*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	while(*s2 != '\0')
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (res);
}
