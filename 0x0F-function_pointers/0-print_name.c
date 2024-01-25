#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - the function
* @name: input character
* @f: input character
* Return: no value
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
