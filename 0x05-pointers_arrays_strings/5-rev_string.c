#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: parameter to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		j = *(s + i);
		*(s + i) = *s(len - i - 1);
		*(s + len - i - 1) = j;
	}
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter
 * Return: 0;
 */
int _strlen(char *s)
{
	int x;

	while (*(s +x) != '\0')
	       x++;

	return (x);
}
