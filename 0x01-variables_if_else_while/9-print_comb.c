#include <stdio.h>
/**
* main - A program that prints a combination of single numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int x;

for (x = 36; x <= 47; x++)
{
putchar(x);
if (x == 47)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
