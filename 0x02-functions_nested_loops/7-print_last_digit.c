#include "main.h"

/**
 * print_last_digit - prints last digit
 * @a: the number
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	for ld = a % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
