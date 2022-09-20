#include "main.h"

/**
 * rev_string - a function that reverse a string
 *
 * @s: string parameter input to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, i, x;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;

	x = len / 2;

	while (x--)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
