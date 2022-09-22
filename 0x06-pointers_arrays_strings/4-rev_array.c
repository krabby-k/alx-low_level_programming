#include "main.h"

/**
 * reverse_array - reverse array content
 *
 * @a: array
 * @n: arg number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, ind;

	for (ind = n - 1; ind > n / 2; ind--)
	{
		x = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = x;
	}
}
