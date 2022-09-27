#include "main.h"

/**
 * _memcpy -  copies memory area from src to dest
 *
 * @dest: destination to write to
 * @src: source to copy from
 *
 * @n: number of bytes to write
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;

	return (dest);
}
