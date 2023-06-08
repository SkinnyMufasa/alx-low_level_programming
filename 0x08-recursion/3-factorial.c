#include<stdio.h>
/**
 * factorial - returns the factorial of a given number
 *
 * n - Given number
 *
 * Return: Factorial of given number
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	fact = factorial(n - 1) * n;
	return (fact);
}
