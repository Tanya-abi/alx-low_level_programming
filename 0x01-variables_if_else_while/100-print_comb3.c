#include <stdio.h>
/**
* main - prints all possible different combinations of two digits.
*
* Description: Numbers must be separated by,followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits 
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* Return: 0
*/
int main(void)
{
	int x = 48;
	int y;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (x ==56 && y == 57)
			{
				y++;
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
				y++;
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
