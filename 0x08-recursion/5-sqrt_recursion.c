#include<stdio.h>
/**
 * rec - Makes possible to evaluate from 1 to n
 * @n: Given number
 * @low: lower bound of search range
 * @high: higher bound of search range
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int rec(int n, int low, int high)
{
	if (low > high)
	{
		return (-1);
	}
	else
	{
		int mid = low + (high-low)/2;
		int sqr = mid * mid;
		int ans;

		if (sqr == n)
		{
			return (mid);
		}
		else if (sqr > n)
		{
			ans = rec(n, low, mid-1);
		}
		else
		{
			ans = rec(n, mid+1, high);
		}
		return (ans);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (rec(n, 1, n));
}
