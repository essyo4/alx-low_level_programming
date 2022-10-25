#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: returns string in reverse
 */

void rev_string(char *s)
{
	char v = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		v = s[i];
		s[i] = s[c];
		s[c] = v;
	}
}

