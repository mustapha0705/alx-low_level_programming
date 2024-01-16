#include "main.h"

/**
 * _strcpy - Copy a string including the null byte to a destination buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
