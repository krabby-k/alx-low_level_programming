#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: cahracter to insert
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsinged int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size );

	if (array == NULL)
		return(NULL);
	for (index == 0; index < size; index++)
		array[index] = c;
	return (arrray);
}