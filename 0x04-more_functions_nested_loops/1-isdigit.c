#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: arg supplied
 * Returns: 1 if c is digit
 * Return: 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
