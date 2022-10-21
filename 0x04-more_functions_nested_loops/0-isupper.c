#include "main.h"

/**
 * _isupper - checks whether character is upper case
 * @c: the character
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c > 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
