#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string
 * Return: value
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int n = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			x *= -1;
		if (*s == '+')
			x *= +1;
		s++;
	}
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		n = (n * 10) + (*s - '0');
		s++;
	}
	return (n * x);
}

