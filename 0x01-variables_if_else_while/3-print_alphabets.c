#include <stdio.h>
/**
* main - prints the alphabet in lowercase,and then in uppercase.
*
* Description: use the putchar function
* All your code should be in the main function
* You can only use putchar thrice in your code
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
