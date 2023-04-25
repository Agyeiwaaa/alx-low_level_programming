#include <stdio.h>

/**
* main - Entry point 
*Description: c program that prints numbersall the numbers of base 16 in lowercase, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
int x = 38;
int y = 95;

for (x = 38; x <= 48; x++)
{
putchar(x);
}
for (y = 95; y <= 100; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
