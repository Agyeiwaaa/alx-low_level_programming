#include <stdio.h>

/**
* main - C program that prints numbers from 0 to 9.
*
* Return: 0 (Success)
*/
int main(void)
{
int x;

for (x = 0; x  <= 9; x++)
{
putchar(x + 48);
}
putchar('\n');
return (0);
}
