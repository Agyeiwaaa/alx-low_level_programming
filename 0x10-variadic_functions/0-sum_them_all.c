#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Return the sum of all it paramter
* @n: The number of paramters passed to the func
* @...: A variable number of paramters to calculate the sum of.
*
* return: If n == 0 - 0.
*Otherwise - the sum of all parameter
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int y, sum = 0;
va_start(ap, n);
for (y = 0; y < n; y++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
