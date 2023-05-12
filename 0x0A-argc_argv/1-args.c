#include <stdio.h>
#include "main.h"
/**
* main - A program that print the number of argument passed to the program
* @argc: numbers of argument
* @argv: arrays of argument
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
