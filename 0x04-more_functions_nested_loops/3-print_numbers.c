#include "main.h"

/**
 * print_numbers - prints number from0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int x;

	while (x < 10)
		_putchar(x++ + '0');

	_putchar('\n');
}
