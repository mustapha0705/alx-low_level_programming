#include "main.h"

/**
* swap_int - swaps two integers
* @a: number
* @b: another one
*/
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
