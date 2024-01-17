#include "main.h"

/**
* factorial - prints factorial of any number
* @n: Input integer
* Return: returns the factorial
*/

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
