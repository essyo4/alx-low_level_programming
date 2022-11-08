#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: count arguents
 * @argv:arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
