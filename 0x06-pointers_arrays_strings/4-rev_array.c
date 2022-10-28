#include "main.h"

/**
 * void reverse_array - reverses content of array
 * @a: array
 * @n: number of elements in array
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
