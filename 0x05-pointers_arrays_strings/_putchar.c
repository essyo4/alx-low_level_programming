#include <unistd.h>

/**
 * _putchar - writes c in stdout
 * @c: character
 * Return: in success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
