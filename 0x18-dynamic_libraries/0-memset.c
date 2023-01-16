#include "main.h"

/**
 * _memset - fills bytes of memory area
 * @s: a pointer to memory area to be filled
 * @b: character to fill memory area
 * @n: number of bytes to be filled
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
