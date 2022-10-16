#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char nel = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (nel <= 'Z')
{
putchar(nel);
nel++;
}
putchar('\n');
return (0);
}
