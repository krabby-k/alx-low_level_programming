#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: arg
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_puthchar(*(s + len));
	_putchar('\n');
}
