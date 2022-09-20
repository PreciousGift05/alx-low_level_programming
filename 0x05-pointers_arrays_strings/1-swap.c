#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: pointer of parameter
 *
 * @b: pointer of parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
