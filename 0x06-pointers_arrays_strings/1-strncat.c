#include "main.h"

/**
 * _strncat - concatenates two strings adding numbeer of bytes
 * @dest: string to be appended upon
 * @src: parameter to aadded to dest
 * @n: integer paramater to compare index to
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0 dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
