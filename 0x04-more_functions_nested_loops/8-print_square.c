#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < (size - 1); y++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n')
	}
}
