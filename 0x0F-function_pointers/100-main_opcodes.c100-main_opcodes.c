#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main finction 
 *
 * Return: Always 0
 */
int main(int ar, char *argv[])
{
	char *opc = (char *) main;
	int i, mbytes;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fir (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes -1)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
