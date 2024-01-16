#include "main.h"

/**
* puts_half - prints second half of a string
* @str: input character
*/

void puts_half(char *str)
{
	int half;
	int length = 0;
	int i = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	half = length / 2;

	str -= half;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
