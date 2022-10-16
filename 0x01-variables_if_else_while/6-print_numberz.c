#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char num [] = "0123456789";
for (i = 0; i < 10; i++)
{
putchar(num[i]);
}
putchar('\n');
return (0);
}
