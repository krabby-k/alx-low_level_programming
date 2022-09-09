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
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
