#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - A function that print name
* @name: string
* @f: function
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
