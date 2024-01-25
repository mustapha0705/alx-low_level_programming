#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation
 * fails or if str is NULL.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length, i;
    length = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* Allocate memory for the duplicate string */
    duplicate = malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return (NULL);

    /* Copy the characters from the original string to the duplicate string */
    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return (duplicate);
}
