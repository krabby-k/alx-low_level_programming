#include <stdio.h>
#include <ctype.h>

/**
 * main -Entry point
 *
 * description: using main function & putchar
 * prints the alphabet in lowercase ans uppercase
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
