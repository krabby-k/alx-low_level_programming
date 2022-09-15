#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers except 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if ((x == '2') || (x == '4'))
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
}
