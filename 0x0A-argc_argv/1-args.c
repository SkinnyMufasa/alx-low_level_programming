#include<stdio.h>
/**
 * main -  Prints the number of arg passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int not = 0;

	(void)argc;

	for (i = 0; argv[i] != NULL; i++)
	{
		not++;
	}
	printf("%d\n", not);
	return (0);
}
