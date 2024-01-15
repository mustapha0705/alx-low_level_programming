#include "main.h"

/**
* _strlen - counts number of characters
* @s: the input string
* Return: returns the string's length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
