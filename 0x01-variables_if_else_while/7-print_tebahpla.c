#include <tdio.h>
/**
*main - Entry point
*Description: C program that prints lowercase in reverse
*Return 0 (success)
*/
int main(void)
{
char ch;

for (ch = 'x'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
