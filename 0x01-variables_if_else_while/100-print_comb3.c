#include <stdio.h>
/**
* main - prints all possible different combinations of two digits.
*
* Description: Numbers must be separated by,followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function 
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* Return: 0
*/
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(f_d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}

