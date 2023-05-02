#include "main.h"
/**
* _put - print a string followed by  new line, to stdout
* @str: String to prints
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
