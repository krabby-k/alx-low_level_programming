#include "main.h"

/**
 * _strncpy - copies a string
 * works identical to the strcpy library
 * @dest: buffer for string copy
 * @src: the sorce string
 * @n: max number of bytes copied
 * Return: copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
