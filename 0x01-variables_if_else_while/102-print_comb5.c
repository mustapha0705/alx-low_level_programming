#include <stdio.h>

/**
*main - Entry point
*
*Return: Always returns 0
*/

int main(void)
{
	int i, j;

	for (int i = 0; i < 100; ++i)
	{
		for (int j = i; j < 100; ++j)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i < 99 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
