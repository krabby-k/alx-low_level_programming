#include "main.h"

/**
 * malloc_checked -allocates memory using malloc
 * @b: memeory being allocated
 *
 * Return: pointer to allocated memory;
 * if error, normal process termination
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
}
