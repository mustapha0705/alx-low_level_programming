#include <stdio.h>

/**
* main - main function
* @argc: number of command-line arguments
* @argv: array of commanad-line argument strings
* Return: returns 0
*/

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s", argv[i]);
		}
	}
	return (0);
}
