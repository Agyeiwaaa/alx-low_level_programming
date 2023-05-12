#include <stdio.h>
#include "main.h"
/**
* main -  All argument should be printed
* @argc: numbers of argument
* @argv: arrays of argument
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
