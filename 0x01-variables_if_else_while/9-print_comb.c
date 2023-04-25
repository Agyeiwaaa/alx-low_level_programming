#include <stdio.h>
/**
* main - A program that prints a combination of single numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x);
if (x == 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
