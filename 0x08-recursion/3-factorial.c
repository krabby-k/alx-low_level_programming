#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number param
 * Return: factorial
 */
int factorial(int n)
{
	int nf;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	nf = factorial(n - 1);
	return (n * nf);
}
