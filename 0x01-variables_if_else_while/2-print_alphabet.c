#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/**
*char alp[26][10] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
for (i = 0; i < 26; i++)
{
putchar("%c", alp[i]);
}*/
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
}
return (0);
}
