#include "main.h"

/**
 * _strspn - Locates a character in a string
 *
 * @s: This is the main C string to be scanned.
 *
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
		{
			sum++;
			s++;
			ptr = accept;
		}
		else
			ptr++;
		if (*ptr == 0)
			return (sum);
	}
	return (sum);
}
