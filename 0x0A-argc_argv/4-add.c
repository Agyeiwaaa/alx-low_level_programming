#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digits
* @str: array str
*
* Return: 0 (Success)
*/
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}
/**
* main - Print the names of the program
* @argc: Count Argument
* @argv: argument
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*Go through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to integer*/
sum += str_to_int;
}
/*Condition if one of the numbers contain symbol that are not digit*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
