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
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
