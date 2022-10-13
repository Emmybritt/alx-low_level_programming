#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %c byte(s)", (unsigned long)sizeof(c));
printf("Size of an int: %i byte(s)", (unsigned long)sizeof(i));
printf("Size of a long int: %li byte(s)", (unsigned long)sizeof(li));
printf("Size of a long long int: %lli byte(s)", (unsigned long)sizeof(lli));
printf("Size of a float: f: %f byte(s)", (unsigned long)sizeof(f));
return (0);
}
