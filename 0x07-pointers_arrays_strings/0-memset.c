#include "main.h"
/**
* _memset - fill a block with a specific value
* @s: starting address of memory to be filled
* @b: the desired values
* @n: number of bytes to be changed
* Return: changed arrays with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
