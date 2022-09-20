#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed to by src
 *
 * @dest: pointer of parameter
 *
 * @src: pointer of parameter
 *
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
