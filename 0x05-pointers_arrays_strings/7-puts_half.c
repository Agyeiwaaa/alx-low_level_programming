#include "main.h"
/**
* puts_half - A function that prints second half of a string
* if odd characters, n = (length_of_the_string - 1) / 2
* @str: Input
* Return: half of Input
*/
void puts_half(char *str)
{	
int a, n, longi;
longi = 0;
for (a = 0; str[a] != '\0'; a++)
longi++;	
n = (longi / 2);
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
