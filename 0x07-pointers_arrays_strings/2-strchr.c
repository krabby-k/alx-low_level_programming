#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string being checked
 * @c: character to located
 *
 * Return: pointer to the located character
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x)
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}
