#include<stdio.h>
/**
 *
 * _pow_recursion - Function that returns the value of x raised to the power of y
 *
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	int nxt = y -1;
	if (y < 0)
	{
		return (-1);
	}
	int answer = x * _pow_recursion(x, nxt);
	return (answer);
}
