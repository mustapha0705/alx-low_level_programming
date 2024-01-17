#include "main.h"

/**
* _pow_recursion - calculates power of x to y, both integers
* @x: input integer
* @y: input integer
* Return: returns the final value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
