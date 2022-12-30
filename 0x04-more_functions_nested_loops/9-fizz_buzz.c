#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 *
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz
 * Multiples of both 3 and 5 should print FizzBuzz.
 *
 *  Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
		{
			printf("%d\t", i);
		}
		i++;
	}
	return (0);
}
