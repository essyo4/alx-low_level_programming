#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string
 * @s: string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int x = 0, y = 0;

	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output[] = "nopqrstuvwxyzabsdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != 0)
	{
		for (y = 0; y <= 52; y++)
		{
			if (*(s + x) == input[y])
			{
				*(s + x) = output[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
