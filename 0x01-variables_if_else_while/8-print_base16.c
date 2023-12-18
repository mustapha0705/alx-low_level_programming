#include <stdio.h>

/**
*main - Entry point
*
*Return: Always returns 0
*/

int main(void)
{
	char hexDigits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; ++i)
	{
		putchar(hexDigits[i]);
	}
	putchar('\n');
	return (0);
}
