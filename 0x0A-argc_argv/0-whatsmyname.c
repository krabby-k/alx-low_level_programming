#include "main.h"
#include <stdlib.h>

/**
 * main -prints name of the program
 * @argc: -number of args
 * @argv: array of string args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	exit(EXIT_SUCCESS);
}
