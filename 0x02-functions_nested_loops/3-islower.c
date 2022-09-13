#include "main.h"

/**
 * _islower - checks if character passed as arg is lowercase
 *
 * @c: is an argument being passed to the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0)
}
