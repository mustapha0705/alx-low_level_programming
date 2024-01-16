#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[12];
	int i;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = 'a' + (rand() % 26);
	}

	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
