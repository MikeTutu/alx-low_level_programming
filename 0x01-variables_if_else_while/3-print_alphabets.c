#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha, alpha2;
alpha = 'a';
alpha2 = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
while (alpha2 <= 'Z')
{
putchar(alpha2);
alpha2++;
}
putchar('\n');
return (0);
}
