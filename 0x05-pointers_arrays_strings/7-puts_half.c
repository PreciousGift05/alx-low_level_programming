#include "main.h"
/**
 * puts_half -  a function that prints half of a string, followed by a new line
 *
 * @str: pointer of parameter
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int a, len;

	a = 0;
	while (str[a] != '\0')
		a++;

	len = (a + 1) / 2;

	for (a = len; str[a]; a++)
	{
		_putchar (str[a]);
	}

	_putchar ('\n');

}

