#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of array
 * @a: array
 * @n: number of element to be printed
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (im != n - 1)
			printf(",");
	}
	printf("\n");
}

