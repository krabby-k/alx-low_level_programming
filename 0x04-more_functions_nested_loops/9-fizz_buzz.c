#include <stdio.h>

/**
 * main -entry point
 *
 * prints numbers 1 to 100
 * Return:0
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
			printf("%d ", x);
		x++;
	}
	return (0);
}
