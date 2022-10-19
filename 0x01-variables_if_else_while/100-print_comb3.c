#include <stdio.h>

/**
 * main - prints possible combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int x = '0';
	int y = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (!((x == y) || (y > x)))
			{
				putchar(y);
				putchar(x);
				if (!(x == '9' && y == '&'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
