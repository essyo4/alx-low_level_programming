#include "main.h"

/**
 * swap_int - swaps a and b
 * @a: first integer
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
