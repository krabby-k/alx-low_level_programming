#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memeory to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
