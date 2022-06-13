#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *rev_string - function that reverses a string.
 *@s: table of caracter
 *Return: Void
 */

void rev_string(char *s)
{
	long int i = sizeof(s);
	char *p = s;
	/* while (*p != '\0') */
	/* { */
	/* 	printf("%c" ,*p++); */
	/*  } */
	printf("lent of p = %ld\n", sizeof(p));

	while (i >= 0)
	{
		*(p + (sizeof(s) - i)) = s[i];
		printf("\np=%c\n" ,*p);
	       printf("size of p = %ld\n", sizeof(p));
		i--;

	}
	printf("\n");
}
