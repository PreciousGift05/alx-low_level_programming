#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 *  @s: string
 *
 *  Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
