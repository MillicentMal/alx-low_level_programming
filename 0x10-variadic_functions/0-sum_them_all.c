#include "holberton.h"
#include <starg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
va_list arguments;

va_start (arguments, n);

for (int i = 0; i < n; i++)
{
sum = va_arg (arguments, int);
}
if (n == 0)
{
return (0);
}
va_end (arguments);
return (n);
}
