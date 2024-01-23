#include <stdio.h>

/**
* main - main function
* @argc: number of arguments passed
* @argv: array of the number of arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
