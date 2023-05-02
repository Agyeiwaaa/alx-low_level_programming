#include "main.h"
/**
* _strlen - Return the lengths of a string
* @s: String
* Return: lengths
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
