#include <stdio.h>

/**
 * *_atoi - extract the number to integer
 * @s: An input string
 * Return: number int
 */

int _atoi(char *s)
{
	int	i;
	int	sign;
	unsigned int	number;

	i = 0;
	sign = 1;
	number = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			i = 1;
			number = number * 10 + *s - '0';
		}
		else if (i)
			break;
		s++;
	}

	if (sign < 0)
		number = (-number);

	return (number);
}
