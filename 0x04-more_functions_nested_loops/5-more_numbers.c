#include "main.h"
#include <stdio.h>

/**
 * more_numbers -prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int x, y;
	
	for (x = 0; x <= '9'; x++)
	{
		for (y = 48; y <= 62; x++)
		{
			putchar(y);
		}
		putchar('\n');
	}
	putchar('\n');
}
