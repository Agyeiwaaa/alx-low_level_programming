#include <stdio.h>

/**
* main - Entry point
* Description: C program that prints both lowercase and uppercase 
* Return: 0 (Success)
*/
int main(void)
{
char alph[32] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alph[i]);
}
putchar('\n');
return (0);
}
