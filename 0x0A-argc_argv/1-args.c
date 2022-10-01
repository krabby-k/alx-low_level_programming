#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of args
 * @argv: array of string args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}
