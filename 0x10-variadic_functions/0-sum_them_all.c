#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sums values of all its parameters
*@n: last argument to be summed
*return: returns sum
*
*/
int sum_them_all(const unsigned int n, ...)
{
va_list xs;

va_start (xs, n);
unsigned int i;
unsigned int sum;
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg (xs, int);
}
va_end(xs);
if (n == 0)
{
return (0);
}
return (sum);
}
