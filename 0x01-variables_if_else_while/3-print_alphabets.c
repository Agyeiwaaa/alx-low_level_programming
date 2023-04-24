#include <stdio.h>

/**
* main - Entry point
* Description: A program that prints both lowercase and uppercase alphabets followed by new line
* Return: 0 (Success)
*/
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int b;
for (b = 0; b < 52; b++)
{
putchar(alph[b]);
}
putchar('\n');
return (0);
}
