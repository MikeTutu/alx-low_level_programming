#include "main.h"
#include <string.h>

/**
 * _strcmp - adding two lines together
 * @s1: first string
 * @s2: 2nd string
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* size_t dest_len = strlen(dest); */
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
