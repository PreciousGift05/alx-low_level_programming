#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: collects inputs
 * Return: String conversion
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; source[j]; j++)
		{
			if (s[i] == source[j])
			{
				s[i] = encode[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
