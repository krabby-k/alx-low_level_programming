#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: using main function & putchar
 * prints numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > x)
			{
				putchar((x % 10) + '0');
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
