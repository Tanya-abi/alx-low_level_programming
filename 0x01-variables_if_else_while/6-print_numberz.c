#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
*
* Description: use the putchar and main function
* You can only use putchar twice in your code
* Return: 0
*/

int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
