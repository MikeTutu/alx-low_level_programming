#include "main.h"

/**
 * _isdigit  - checks for digits
 * @c: the value to be cheched
 * Return: 1 if it's digit, 0 if alpha
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
