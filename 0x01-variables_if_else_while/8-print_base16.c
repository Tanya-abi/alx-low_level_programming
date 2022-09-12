#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase,followed by a new line
*
* Description: use the putchar and main function
* You can only use putchar three times in your code
* Return: 0
*/

int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
