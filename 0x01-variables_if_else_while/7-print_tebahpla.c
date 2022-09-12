#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse, followed by a new line
*
* Description: use the putchar and main function
* You can only use putchar twice in your code
* Return: 0
*/

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
