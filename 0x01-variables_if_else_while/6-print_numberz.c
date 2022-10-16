#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i = 012345;
putchar(i%10 + '0');
putchar('\n');
return (0);
}
