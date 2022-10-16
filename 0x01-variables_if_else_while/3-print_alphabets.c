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
while (ch <= 'z')
{
putchar(ch);
ch++;
}
char cl = 'A';
while (cl <= 'Z')
{
putchar(cl);
cl++;
}
putchar('\n');
return (0);
}
