
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int k = 0;

	if (n == 0)
		return (0);
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		k += va_arg(sum, int);
	}
	return (k);

	va_end(sum);
}
