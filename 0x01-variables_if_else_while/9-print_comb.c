#include<stdio.h>
#include<stdlib.h>
#define MAXSTRING 80
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message[] = "0,1,2,3,4,5,6,7,8,9";
int count;
for (count = 0; count < MAXSTRING; count++)
{
if (message[count] == '\0')
{
putchar('\n');
break;
}
else
putchar(message[count]);
}
return (0);
}
