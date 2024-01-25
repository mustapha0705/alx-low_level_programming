#include <stdarg.h>

/**
* sum_them_all - the function
* @n: input integer
* Return: no value
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
	{
		va_end(ap);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
