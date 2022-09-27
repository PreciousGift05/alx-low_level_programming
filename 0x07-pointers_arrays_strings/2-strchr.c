#include "main.h"

/**
 * _strchr - find the char in string
 *
 * @s: string
 * @c: char
 *
 * Return: pointer to the rest od string
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0' ; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return ('\0');
}
