#include "variadic_functions.h"
#include <starg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
va_list xs;

va_start (xs, n);
unsigned int i, sum;
sum = 0;
for (int i = 0; i < n; i++)
{
sum += va_arg (, int);
}
va_end(xs);
if (n == 0)
{
return (0);
}
return (sum);
}
