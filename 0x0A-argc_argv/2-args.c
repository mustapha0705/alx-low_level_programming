#include <stdio.h>

/**
* main - the main function and entry point
* @argc: input integer
* @argv: input character
* Return: Always returns 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
