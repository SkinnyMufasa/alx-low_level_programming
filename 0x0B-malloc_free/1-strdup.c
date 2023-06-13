#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @*str: pointer to the provided string
 *
 * return: pointer to coppied string
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *cop = (char*)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (cop != NULL)
	{
		strcpy(cop, str);
	}
	return (cop);
}
