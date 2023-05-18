#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - A function to allocate memory using malloc
* @b: allocated number of bytes
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
