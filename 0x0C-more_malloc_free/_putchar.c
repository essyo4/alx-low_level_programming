#include <unistd.h>

/**
 * _putchar - writes charater in dtdout
 * @c: character to be written
 * Return: on success 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
