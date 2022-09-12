#include <stdio.h>
/**
* main - prints the alphabet in lowercase,followed by a new line.
*
* Description: use the putchar function
* Print all the letters except q and e
* All your code should be in the main function
* You can only use putchar twice in your code
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
