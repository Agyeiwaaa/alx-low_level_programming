#include <stdio.h>

/**
* main - Entry point
* Description: C program that prints both lowercase and uppercase 
* Return: 0 (Success)
*/
int main(void)
{
char alph[32] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int b;
for (b = 0; b < 32; b++)
{
putchar(alph[b]);
}
putchar('\n');
return (0);
}
