#include "main.h"

/**
 * _strpbrk - matches any character specified
 *
 * @s: This is the C string to be scanned.
 *
 * @accept:character in str1 that matches one of the characters in str2
 *
 * Return: string s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}
	return (0);
}
