#include <stdio.h>

/**
 * main -entry point
 *
 * print numbers
 * Return: nothing
 */
void main(void)
{
	int x = 0;

	while (x++ <= 100)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Buzz ");
		}
		else if ((x % 5) == 0)
		{
			if ( x == 100)
			{
				printf("Buzz ");
				printf('\n');
			}
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ",x);
		}
	}
	return (0);
}