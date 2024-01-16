#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The input string
 *
 * Return: The converted integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{

		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
