#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: A pointer to a newly allocated string containing all arguments,
 * separated by newlines, or NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated;
    int i, j, length = 0, total_length = 0;

    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            length++;
        }
        total_length += length + 1; /* Add 1 for the newline character */
        length = 0; /* Reset length for the next argument */
    }

    /* Allocate memory for the concatenated string (including null terminator) */
    concatenated = malloc(sizeof(char) * total_length);

    if (concatenated == NULL)
        return NULL;

    /* Copy characters from each argument to the concatenated string */
    for (i = 0, length = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            concatenated[length++] = av[i][j];
        }
        concatenated[length++] = '\n'; /* Add newline character after each argument */
    }

    /* Add null terminator at the end */
    concatenated[length] = '\0';

    return concatenated;
}
