#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: using main function & putchar
 * prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
