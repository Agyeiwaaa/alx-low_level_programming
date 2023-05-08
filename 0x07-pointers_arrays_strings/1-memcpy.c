#include "main.h"
/**
*_memcpy - A functions that copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of byte
*Return: copied memory with n bytes change
*/
char *_memcpy(char *dest, char *src, unsigned int n)
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}


