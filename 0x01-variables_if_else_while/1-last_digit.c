#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n, count, lastNum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastNum = n % 10;
while (n != 0)
{
count++;
n = n;
}
if (n > 5 count == 3)
{
printf("Last digit of %d is %d and is 0", n, lastNum);
}
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if (n == 0)
{
printf("Last digit of %d and is %d\n", n, lastNum);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}
return (0);
}
