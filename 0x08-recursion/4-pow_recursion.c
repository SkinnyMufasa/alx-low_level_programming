#include<stdio.h>
/**
 *
 * _pow_recursion - Function that returns the value of x raised to the power of y
 *
 * Return: x to the power y 
 */
int _pow_recursion(int x, int y)
{
	int nxt = y/2;
	int answer;
	
	if (y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y / 2);
		return temp * temp;
	}
	answer = _pow_recursion(x, nxt);
	return (x * answer * answer);
}
