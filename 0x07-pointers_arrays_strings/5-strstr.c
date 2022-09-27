#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 *
 * @haystack: main str to be examined
 *
 * @needle: searched in haystack
 *
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != 0; x++)
	{
		for (y = 0; needle[y] != 0; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (0);
}
