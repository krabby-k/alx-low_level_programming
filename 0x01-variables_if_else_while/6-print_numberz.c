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
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
