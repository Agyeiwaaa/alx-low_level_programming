#include <tdio.h>
/**
*main - Entry point
*Description: C program that prints lowercase in reverse
*Return 0 (success)
*/
int main(void)
{
int x = 85;

for (x = 85; x >= 65; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
