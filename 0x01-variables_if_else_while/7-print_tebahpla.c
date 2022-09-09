#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: using main function & putchar
 * prints the alphabet in lowercase in reverse
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
