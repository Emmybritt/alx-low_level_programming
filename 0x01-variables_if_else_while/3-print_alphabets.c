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
while (ch <= 'Z')
{
putchar(ch,ch);
ch++;
}
putchar('\n');
return (0);
}
