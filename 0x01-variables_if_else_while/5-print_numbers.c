#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: using main function
 * prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
