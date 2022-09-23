#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
