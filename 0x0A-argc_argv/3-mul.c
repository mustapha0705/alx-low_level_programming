#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

