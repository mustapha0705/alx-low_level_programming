#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count = 0, len = 0, start_index = 0;

    if (str == NULL || *str == '\0')
        return NULL;

    /* Count the number of words in the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            start_index = 0;
        else if (start_index == 0)
        {
            start_index = 1;
            word_count++;
        }
    }

    if (word_count == 0)
        return NULL;

    /* Allocate memory for the array of words */
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    /* Allocate memory for each word and copy characters */
    for (i = 0, k = 0; k < word_count; i++)
    {
        if (str[i] != ' ')
        {
            start_index = i;
            while (str[i] != ' ' && str[i] != '\0')
            {
                len++;
                i++;
            }

            /* Allocate memory for the current word */
            words[k] = malloc((len + 1) * sizeof(char));
            if (words[k] == NULL)
            {
                /* Free the allocated memory in case of failure */
                for (j = 0; j < k; j++)
                    free(words[j]);
                free(words);
                return NULL;
            }

            /* Copy characters to the current word */
            for (j = 0; j < len; j++)
                words[k][j] = str[start_index + j];
            words[k][len] = '\0'; /* Null-terminate the word */

            len = 0; /* Reset length for the next word */
            k++;
        }
    }

    words[word_count] = NULL; /* Null-terminate the array of words */

    return words;
}
