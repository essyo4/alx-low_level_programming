#include "main.h"

/**
 * more_numbers - prints number 10 times
 * Returm: Always 0
 */

void more_numbers(void)
{
	int num, x;

	for (x = 0; x <= 9; x++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
