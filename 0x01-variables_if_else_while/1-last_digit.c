#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is more than 5\n", ld, n);
}
else if (ld == 0)
{
printf("Last digit of %d is %d and is 0\n", ld, n);
}
else if (ld < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", ld, n);
}
return (0);
}
