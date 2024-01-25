#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid width or height */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the grid (array of int pointers) */
    grid = malloc(sizeof(int *) * height);

    /* Check if malloc failed */
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row (array of ints) */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);

        /* Check if malloc failed for a specific row */
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory and return NULL on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
    }

    /* Initialize each element of the grid to 0 */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}
