#include <stdio.h>
#include "main.h"

/**
 * print_triangle -prints a triangle
 *
 * @size: arg indicating size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for ((y = size - x); y > 0; y--)
			{
				putchar(' ');
			}
			for (y = 0; y < x; y++)
			{
				putchar('#');
			}
			if (x == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
