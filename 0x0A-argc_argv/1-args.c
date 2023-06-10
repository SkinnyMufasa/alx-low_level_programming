#include<stdio.h>
/**
 * main -  Prints the number of arg passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int size = sizeof(argv);

	printf("%d\n", size);
	return (0);
}
