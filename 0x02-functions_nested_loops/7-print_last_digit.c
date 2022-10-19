#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (0);
}
