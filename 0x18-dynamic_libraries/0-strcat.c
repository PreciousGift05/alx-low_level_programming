#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
