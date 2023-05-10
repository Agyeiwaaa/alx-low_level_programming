#include "main.h"
/**
* Factorial - Return the factorial of a number
* @n: number to returns the factorial from
*
* return: factorial of n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
