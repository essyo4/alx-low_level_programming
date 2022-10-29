#include "main.h"

/**
 * rot13 - encodes a string
 * @str: string
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int x = 0, y;

	char input[] = "ABCDEGGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; y++)
	{
		for (y = 0; input[y] !=  '\0'; y++)
		{
			if (str[x] == input[y])
			{
				str[x] = output[y];
				break;
			}
		}
	}
	return (str);
}
