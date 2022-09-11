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

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 57 || y != 58)
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
