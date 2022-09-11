#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number stored in the variable n is positive or negative.
*
* Description: using the main function
* program will assign a random number to the variable n each time it is executed
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
