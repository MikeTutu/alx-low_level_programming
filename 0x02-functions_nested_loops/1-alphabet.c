#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
return (0);
}
