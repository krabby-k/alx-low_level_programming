#include <stdio.h>

/**
 * main -Entry point
 *
 * description: using main function & putchar
 * print possible single digit combination.s
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
