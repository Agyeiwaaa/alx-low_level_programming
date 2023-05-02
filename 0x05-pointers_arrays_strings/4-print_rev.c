#include "main.h"
/**
* print_rev - print a string in reverse, followed by a new line
* @s: string
* return: 0(success)
*/
void print_rev(char *s)
{
int longi = 0;
int o;
while (*s != '\0')
{
longi++;
s++;
s--;
(o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
