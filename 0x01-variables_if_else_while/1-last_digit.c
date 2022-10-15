#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char n[3];
srand(time(0));
n[3] = rand() - RAND_MAX / 2;
if (n[strlen(n) - 1] > 5)
{
printf("Last digit of 98 is %c and is greater than 5", n[strlen(n) - 1]);
}
else if (n[strlen(n) - 1] == 0)
{
printf("Last digit of 980 is %c and is 0", n[strlen(n) - 1]);
}
else if (n[strlen(n) - 1] < 6 && n[strlen(n) - 1] != 0)
{
printf("Last digit of -980 is %c and is less than 6 and not 0", n[strlen(n) - 1]);
}
return (0);
}
