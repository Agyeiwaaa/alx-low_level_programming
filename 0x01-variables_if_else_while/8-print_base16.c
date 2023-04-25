#include <stdio.h>

/**
* main - Entry point 
*Description: c program that prints numbersall the numbers of base 16 in lowercase, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
int x;

for (x = 38; x < 48; x++)
{
putchar(x);
}
for (x = 97; x < 103; x++)
{
putchar(x);
}
putchar('\n');
return (0);
