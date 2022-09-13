#include "main.h"
#include <stdio.h>

/**
 * _abs -computes the absolute value of int
 *
 * @x: int arg
 * Return:0
 */
int _abs(int x)
{
	if (x > 0 || x == 0)
	{
		return (x);
	}
	else
		return (x * -1);
