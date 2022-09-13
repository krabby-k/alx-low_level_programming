#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 *
 * description: print _putchar
 * using: putchar function
 * Return: 0
 */
int main(void)
{
	write(1,"_putchar\n", 9);
	return (0);
}
