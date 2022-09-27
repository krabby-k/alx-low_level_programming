#include "main.h"

/**
 * _memcpy - copies bytes from memort area
 *
 * @dest: memory area to be copied to 
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
