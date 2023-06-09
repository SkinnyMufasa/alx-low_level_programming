#include<stdio.h>
/**
 * main - print name of program
 * @argc = first argument
 * @argv = argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];
	
	printf("%s\n", name);
	return (0);
}
