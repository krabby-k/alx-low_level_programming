#include "main.h"

/**
 * char *_strcat - concatenates two strings
 *
 * @dest: parameter string
 * @src: parameter string to be appended to dest
 * Return: pointer of string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
