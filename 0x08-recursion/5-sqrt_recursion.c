#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == i * i)
			return (i);
	}
	return (-1);
}
