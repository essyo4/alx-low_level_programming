#include "main.h"

/**
 * _sqrt_recursion -square root of number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive squareroot
 * @n: number
 * @i: iterator
 * Return: recursive number
 */

int _sqrt(int n, int i)
{
	int s = i * i;

	if (s > n)
		return (-1);
	if (s == n)
		return (i);
	return (_sqrt(n, i + 1));
}
