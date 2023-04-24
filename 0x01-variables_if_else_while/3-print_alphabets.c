#include <stdio.h>

/**
* main - Entry point
* Description: C program that prints both lowercase and uppercase alphabets 
* Return: 0 (Success)
*/
int main(void)
{
char alph[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int b;
for (b = 0; b < 60; b++)
{
putchar(alph[b]);
}
putchar('\n');
return (0);
}
