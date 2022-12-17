#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int u = 0;

	while (dest[j])
	{
		j++;
	}
	while (u < n && src[u] != 0)
	{
		dest[j] = src[u];
		j++;
		u++;
	}
	dest[j] = 0;
	return (dest);
}
