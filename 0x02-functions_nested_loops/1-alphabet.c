#include "main.h"

/**
 * main
 *
 * description prints the alphabet, in lowercas
 * using prototype 
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
