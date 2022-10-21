#include "main.h"

/**
 * _isdigit - checks whether is digit
 * @c: character
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	int y;

	if (c >= '0' && c <= '9')
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	return (y);
}
