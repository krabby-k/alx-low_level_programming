#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: arg supplied
 * Returns: 1 if c is uppercase
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
