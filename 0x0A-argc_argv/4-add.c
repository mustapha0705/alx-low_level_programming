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
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *num_str = argv[i];
			int j;

			for (j = 0; num_str[j] != '\0'; j++)
			{
				if (num_str[j] < '0' || num_str[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(num_str);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
