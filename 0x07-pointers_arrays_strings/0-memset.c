#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer block of memory to fill
 * @n: buffer size
 * @b: value to set
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
