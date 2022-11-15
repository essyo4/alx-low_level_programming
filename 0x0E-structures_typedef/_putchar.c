#include <unistd.h>

/**
 * _putchar - writes character c in stdout
 * @c: character
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
