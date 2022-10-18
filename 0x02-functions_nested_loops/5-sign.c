#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: number of sign to be printed
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		-putchar('-');
		return (-1);
}
