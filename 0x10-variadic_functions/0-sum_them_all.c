#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 *@n:  number of arguments passed to the function
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
        unsigned int i;
	int sum = 0;
	va_list list;
	va_start(list, n);

        if (n == 0)
                return(0);

	for (i = 0; i < n; i++)
	{
	        int j = va_arg(list, int);
		sum += j;
	}
	
	va_end(list);

	return (sum);
}
