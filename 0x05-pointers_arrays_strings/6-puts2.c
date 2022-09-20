#include "main.h"

/**
 * puts2 - a function that prints every character of a string
 *
 * pointer of parameter
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar (str[i]);
	}
	_putchar ('\n');
}
