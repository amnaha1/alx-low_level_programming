#include <stdio.h>
/**
 * main - Entry point.
 * Description: “Fizz-Buzz test”.
 * Return: Alwayes 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
			break;
		}
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
