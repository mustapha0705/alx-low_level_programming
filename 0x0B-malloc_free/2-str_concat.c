#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space containing the concatenated
 * string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1, len2, i, j;
    len1 = 0;
    len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the length of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for the concatenated string (including null terminator) */
    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    /* Copy characters from s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy characters from s2 to concatenated */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Add null terminator at the end */
    concatenated[i + j] = '\0';

    return (concatenated);
}
