#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: An input string
 *
 * Return: return n's value
 */

int _strlen(char *s)
{
	int u = 0;

	while (s[u] != '\0')
		u++;

	return (u);
}

